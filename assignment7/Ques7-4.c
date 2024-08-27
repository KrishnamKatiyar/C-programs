#include<stdio.h>


int main()
{
	int n,a,rem,r=0;
	scanf("%d",&n);
	
	while(n)
	{
		rem=n%10;
		n=n/10;
		r=r*10+rem;
	}
	a=r;
	while(a)
	{
		rem=a%10;
		a=a/10;
		
		switch(rem){
			case 0 : printf("Zero ");
			         break;
			case 1 : printf("One ");
			         break;
			case 2 : printf("Two ");
			         break;
			case 3 : printf("Three ");
			         break;
			case 4 : printf("Four ");
			         break;
			case 5 : printf("Five ");
			         break;
			case 6 : printf("Six ");
			         break;
			case 7 : printf("Seven ");
			         break;
			case 8 : printf("Nine ");
			         break;
			case 9 : printf("Ten ");
			         break;
		}
	}

	
	return 0;
	
}
	
	

