#include"stdio.h"
void main()
{
	int yr;
	
	printf("Enter any year : ");
	scanf("%d",&yr);
	
	if((yr%400==0) && (yr%4==0) || (yr%100!=0))
		
	  printf("Leap year");
	 
	else
	 printf("Not a leap year");
}
