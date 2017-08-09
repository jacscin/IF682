#include <stdio.h>
#include <stdlib.h>

long long int *m;

void myPrint(long long int n){
	printf("The number is %lli!\n", n);
}

long long int fib(int n){
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
	m = (long long int *) malloc(100*sizeof(long long int));
	int i;
	for(i = 0; i < 100; ++i)
		m[i] = -1;
	m[0] = 0;
	m[1] = 1;
	myPrint(fib(92));
	return 0;
}
