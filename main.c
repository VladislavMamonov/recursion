#include "functions.h"
#include <stdio.h>
#include <stdlib.h>


int main()
{
	int size, i;
	int *arr = NULL;
	int sum;

	printf("Input size of array: ");
		scanf("%d", &size);

	arr = (int*)malloc(size * sizeof(int));

	for (i = 0; i < size; i++) {
		printf("arr[%d] = ", i); 
		scanf("%d", &arr[i]);
	}

	
	sum = sum_array_recursive(arr, size);
	printf("recursive sum: %d\n", sum);

	sum = sum_array_iterative(arr, size);
	printf("iterative sum: %d\n", sum);



	int n, result;
	printf("Input number of fibonacci: ");
	scanf("%d", &n);

	result = fibonacci_recursive(n);
	printf("recursive result: %d\n", result);

	result = fibonacci_iterative(n);
	printf("iterative result: %d\n", result);

	int number;

	printf("Input number for convert to string: ");
	scanf("%d", &number);
	IntToStr(number);
	printf("\n");

	return 0;
}