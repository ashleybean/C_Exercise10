#include <stdio.h>

//write a function that compares two numbers and returns a pointer to the larger one
int* findLarger(int* a, int* b) {
	if (*a > *b) {
		return a;
	} else {
		return b;
	}
}	

//call this function and print the value of the larger number
int main() {
	int x = 3;
	int y = 5;

	int* (*ptr)(int*, int*) = findLarger;
	int *result = ptr(&x, &y);
	
	printf("The larger number is: %d\n", *result)
		;
	return 0;
}
