#include <stdio.h>

int add(int a, int b) {
	return a + b;
}


int subtract(int a, int b) {
	return a - b;
}


int multiply(int a, int b) {
	return a * b;
}


int divide(int a, int b) {
	return a / b;
}

int remainder(int a, int b) {
	return a % b;
}

int main()
{
	printf("Add; %d\n", add(1, 1));
	printf("Subtract: %d\n", subtract(1, 1));
	printf("Multiply: %d\n", multiply(2, 2));
	printf("Division: %d\n", divide(10, 2));

	return 0;
}
