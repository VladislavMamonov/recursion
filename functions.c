#include "functions.h"
#include <stdio.h>


int sum_array_recursive(int *arr, int size)
{
	if (size == 0)
		return 0;

	return arr[size - 1] + sum_array_recursive(arr, size - 1);
}

int fibonacci_recursive(int n)
{
	if (n == 0 || n == 1)
		return 1;

	return fibonacci_recursive(n - 1) + fibonacci_recursive(n - 2);
}

int sum_array(int *arr, int size, int acc)
{
	if (size == 0)
		return acc;
	else
		return sum_array(arr, size - 1, acc + arr[size - 1]);
}

int sum_array_iterative(int *arr, int size)
{
	return sum_array(arr, size, 0);
}



int fibonacci(int previous, int current, int count, int number)
{
	if (number == 0 || number == 1)
		return 1;

	if (count == number)
		return current;

	return fibonacci(current, current + previous, count + 1, number);
}

int fibonacci_iterative(int n)
{
	return fibonacci(1, 2, 2, n);
}

char *IntToStr_add(int number, char *str)
{
	if (number <= -10) {
		str = IntToStr_add(number / 10, str);
	}

	*str++ = '0' - number % 10;
	return str;
}

char *IntToStr(int number, char *str)
{
	char *temp = str;
	if (number < 0) {
		*temp++ = '-';
	} else {
		number = -number;
	}

	IntToStr_add(number, temp);
	return str;
}