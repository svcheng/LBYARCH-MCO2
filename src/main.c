#include <stdio.h>

extern void SAXPYasm(int n, float A, float* X, float* Y, float* Z);

void printZ(int n, float* Z) {
	printf("Z = ");
	for (int i = 0; i < n; i++) {
		if (i < n - 1)
			printf("%.2f, ", Z[i]);
		else
			printf("%.2f\n", Z[i]);
	}
}

void SAXPY(int n, float A, float* X, float* Y, float* Z) {
	for (int i = 0; i < n; i++) {
		Z[i] = (A * X[i]) + Y[i];
	}
}

int main() {
	int n = 3;
	float A = 2.0;

	float X[3] = { 1.0, 2.0, 3.0 };
	float Y[3] = { 11.0, 12.0, 13.0 };
	float Z[3] = { 0.0, 0.0, 0.0 };

	// Call C function
	SAXPY(n, A, X, Y, Z);
	printZ(n, Z);

	for (int i = 0; i < n; i++)
		Z[i] = 0.0;

	SAXPYasm(n, A, X, Y, Z);
	//printf("%.2f", *SAXPYasm(n, A, X, Y, Z));
	printZ(n, Z);

	return 0;
}