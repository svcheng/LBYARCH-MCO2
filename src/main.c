#include <stdio.h>
#include <time.h> 

int numTestRuns = 30;

extern void SAXPYasm(int n, float A, float* X, float* Y, float* Z);

void printZ(int n, float* Z) {
	for (int i = 0; i < n; i++) {
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
	double timeElapsed = (double)time / CLOCKS_PER_SEC;
	printf("|  Time Elapsed: %.4f\n", timeElapsed);

	return timeElapsed;
}

double benchmarkx86_64(int n, float A, float* X, float* Y, float* Z) {
	printf("x86-64: ");
	clock_t time = clock();
	SAXPYasm(n, A, X, Y, Z);
	time = clock() - time;
	printZ(n, Z); // temporary, for checking output
	double timeElapsed = (double)time / CLOCKS_PER_SEC;
	printf("|  Time Elapsed: %.4f\n", timeElapsed);

	return timeElapsed;
}

void testCase0() {
	int n = 3;
	float A = 2.0;

	float X[3] = { 1.0, 2.0, 3.0 };
	float Y[3] = { 11.0, 12.0, 13.0 };
	float Z[3] = { 0.0, 0.0, 0.0 };

	double cTimes = 0.0;
	double x86_64Times = 0.0;

	printf("CASE 0\n------------------------\n");
	for (int i = 0; i < numTestRuns; i++) {
		printf("Run %d\n", i + 1);
		cTimes += benchmarkC(n, A, X, Y, Z);
		resetZ(n, Z);
		x86_64Times += benchmarkx86_64(n, A, X, Y, Z);
		printf("\n");
	}

	printf("Total Times: %.4f  %.4f\n", cTimes, x86_64Times);
	cTimes = cTimes / numTestRuns;
	x86_64Times = x86_64Times / numTestRuns;
	printf("Average Times: %.4f  %.4f\n", cTimes, x86_64Times);
}

int main() {

	testCase0();

	return 0;
}