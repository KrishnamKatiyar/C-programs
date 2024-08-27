#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	
	switch(a>b){
		case 1: printf("%d is greater",a);
		        break;
		case 0: printf("%d is greater",b);
		        break;

		default : printf("Invalid Input");
	
	}
	
	return 0;
	
}
