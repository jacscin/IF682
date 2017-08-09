#include <stdio.h>
#include <stdlib.h>

int m*;

void myPrint(int n){
	printf("The number is %d!\n", n);
}

int fib(int n){
	if(n == 0)
		return m[0];
	if(n == 1)
		return m[1];
	if(m[n] != -1)
		return m[n];
	m[n] = fib(n-1) + fib(n-2);
	return m[n];
}

int main(){
	m = (int *) malloc(1111111*sizeof(int));
	m[0] = 0;
	m[1] = 1;
	myPrint(fib(666));
	return 0;
}
