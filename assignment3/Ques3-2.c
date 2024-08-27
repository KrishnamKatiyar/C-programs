#include"stdio.h"
void main()
{
	int a,b,c;
	printf("Enter three numbers : ");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	
	if(a>b)
	 if(a>c)
	  printf("Max. no. is %d",a);
	 else
	  printf("Max. no. is %d",c);
	else
	 if(b>c)
	  printf("Max. no. is %d",b);
	 else 
	  printf("Max. no. is %d",c);
}
