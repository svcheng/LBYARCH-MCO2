#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

int numTestRuns = 30;

extern void SAXPYasm(int n, float A, float* X, float* Y, float* Z);

void printFirstTen(float* Z, int n) {
	int end = n < 10 ? n : 10;
	for (int i = 0; i < end; i++) {
		printf("%.2f  ", Z[i]);
	}
}

void resetZ(int n, float* Z) {
	for (int i = 0; i < n; i++) {
		Z[i] = 0.0;
	}
}

void SAXPY(int n, float A, float* X, float* Y, float* Z) {
	for (int i = 0; i < n; i++) {
		Z[i] = A * X[i] + Y[i];
		if (i < 10) {
			printf("%.2f  ", Z[i]);
		}
	}
}

double benchmarkC(int n, float A, float* X, float* Y, float* Z) {
	printf("C     : ");

	clock_t time = clock();
	SAXPY(n, A, X, Y, Z);
	time = clock() - time;

	printf("\n");
	return (double)time / CLOCKS_PER_SEC;
}

double benchmarkx86_64(int n, float A, float* X, float* Y, float* Z) {
	printf("x86-64: ");

	clock_t time = clock();
	SAXPYasm(n, A, X, Y, Z);
	time = clock() - time;

	printFirstTen(Z, n); // temporary, for checking output
	printf("\n");
	return (double)time / CLOCKS_PER_SEC;
}

void computeAverageTime(int testCaseNum, int n, float A, float* X, float* Y, float* Z) {
	double cTimes = 0.0;
	double x86_64Times = 0.0;

	printf("CASE %d\n------------------------\n", testCaseNum);
	for (int i = 0; i < numTestRuns; i++) {
		printf("Run %d\n", i + 1);
		cTimes += benchmarkC(n, A, X, Y, Z);
		resetZ(n, Z);
		x86_64Times += benchmarkx86_64(n, A, X, Y, Z);
		printf("\n");
	}

	printf("Total Times:\n    C     : %.4f\n    x86-64: %.4f\n", cTimes, x86_64Times);
	cTimes = cTimes / numTestRuns;
	x86_64Times = x86_64Times / numTestRuns;
	printf("Average Times:\n    C     : %.4f\n    x86-64: %.4f\n\n", cTimes, x86_64Times);
}

void testCase0() {
	int n = 3;
	float A = 2.0;

	float X[3] = { 1.0, 2.0, 3.0 };
	float Y[3] = { 11.0, 12.0, 13.0 };
	float Z[3] = { 0.0, 0.0, 0.0 };

	double cTimes = 0.0;
	double x86_64Times = 0.0;

	computeAverageTime(0, n, A, X, Y, Z);
}

void testCase1() {
	int n = 1048576; // 2^20
	float A = 1.0;

	float* X = (float*)malloc(n * sizeof(float)); // heap allocate to avoid stack overflow
	float* Y = (float*)malloc(n * sizeof(float));
	float* Z = (float*)malloc(n * sizeof(float));

	if (X == NULL || Y == NULL || Z == NULL) {
		return;
	}

	for (int i = 0; i < n; i++) {
		X[i] = (float)(i % 10000);
		Y[i] = (float)(i % 10000);
		Z[i] = 0.0;
	}

	computeAverageTime(1, n, A, X, Y, Z);

	free(X);
	free(Y);
	free(Z);
}

int main() {
	testCase0();
	testCase1();

	return 0;
}