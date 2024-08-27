#include"stdio.h"
int main(){
	int s,h,m;
	
	printf("Input seconds: ");
	scanf("%d",&s);
	
	h=s/3600;
	s=s%3600;
	m=s/60;
	s=s%60;
	
	printf(" There are:\n H:M:S-%d:%d:%d",h,m,s);
	
	return 0;
	
}

