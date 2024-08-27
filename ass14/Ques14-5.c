#include<stdio.h>

int sumOfDigits(int n){
	if(n==0) return 0;
	return ((n%10)+(sumOfDigits(n/10)));
}

int main(){
	int num;
	printf("Enter number : ");
	scanf("%d",&num);
	printf("sum of digits is %d",sumOfDigits(num));
	return 0;
}
