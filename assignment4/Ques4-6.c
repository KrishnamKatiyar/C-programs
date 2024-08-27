#include"stdio.h"
int main()
{
	int a,b,c,s=0;
	scanf("%d%d%d",&a,&b,&c);
	
	s=a+b+c;
	
	if(s==180){
		printf("Valid Triangle");
	}
	else {
		printf("Invalid Triangle");
	}
	
	return 0;	
}
