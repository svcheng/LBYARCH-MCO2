#include <stdio.h>

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

void benchmark(int n, float A, float* X, float* Y, float* Z) {
	printf("C     : ");
	// time C implementation

	SAXPY(n, A, X, Y, Z);
	printf("\n");

	resetZ(n, Z);

	printf("x86-64: ");
	// time x86-64 implementation

	SAXPYasm(n, A, X, Y, Z);
	printZ(n, Z); // temporary, for checking output
	printf("\n");
}

void testCase0() {
	int n = 3;
	float A = 2.0;

	float X[3] = { 1.0, 2.0, 3.0 };
	float Y[3] = { 11.0, 12.0, 13.0 };
	float Z[3] = { 0.0, 0.0, 0.0 };

	benchmark(n, A, X, Y, Z);
}

int main() {

	testCase0();

	return 0;
}