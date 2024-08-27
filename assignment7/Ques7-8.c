#include<stdio.h>
unsigned long long factorial(int n);
int main()
{
	int n;
	scanf("%d",&n);
	
	if(n<0){
		printf("Factorial is not defined for negative number.\n");
	}
	else{
		unsigned long long result = factorial(n);
		
		printf("Factorial if %d is %llu\n",n,result);
		}
		
	return 0;
		
}
	  


unsigned long long factorial(int n){
	if(n==0 || n==1){
			return 1;
		}
		return n*factorial(n-1);			
} 
