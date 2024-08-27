#include<stdio.h>

int factorial(int n){
	if(n==0) return 1;
	return n*factorial(n-1);
}

int main(){
	int num;
	printf("Enter any no. : ");
	scanf("%d",&num);
	printf("Factorial of this no. is %d",factorial(num));
	
	return 0;
}
