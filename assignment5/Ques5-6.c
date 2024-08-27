#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	
	switch((n > 0) ? 1 : (n < 0) ? -1 : 0){
		case 1: printf("It is positive");
		        break;
		case -1: printf("It is negative");
		        break;
        case 0: printf("It is zero");
		        break;
		default : printf("Invalid Input");
	
	}
	

	
	return 0;
	
}
