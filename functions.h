#ifndef FUNCTIONS_H
#define FUNCTIONS_H

int sum_array_recursive(int *arr, int size);
int fibonacci_recursive(int n);

int sum_array(int *arr, int size, int acc);
int sum_array_iterative(int *arr, int size);

int fibonacci(int previous, int current, int count, int number);
int fibonacci_iterative(int n);

void printd(int n);
void IntToStr(int n);


#endif