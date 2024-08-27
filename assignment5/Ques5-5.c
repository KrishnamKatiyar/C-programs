#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	
	switch(n%2==0){
		case 1: printf("even");
		        break;
		case 0: printf("odd");
		        break;

		default : printf("Invalid Input");
	
	}
	
	return 0;
	
}
