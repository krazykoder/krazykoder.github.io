#include<stdio.h>

// Function to add 2 numbers
int addme (int a, int b) {
	return a+b;
}

// Function to multiply 2 numbers
int multme (int a, int b) {
	return a*b;
}

// Function to divide 2 numbers
int divideme (int a, int b) {
	return a/b;
}

// main function -> entrypoint
int main () {
	printf("Hello World");
	printf("\n");
	printf("add 5 + 2 = %d", addme(5,2) );
	printf("\n");
	printf("mult 5 * 2 = %d", multme( 5,2));
	printf("\n");
   	printf("divide 5 / 2 = %d", divideme( 5,2));
	printf("\n");
}
