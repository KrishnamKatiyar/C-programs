#include"stdio.h"
int main(){
	int m,h,hm;
	
	printf("Input minutes: ");
	scanf("%d",&m);
	
	h=m/60;
	hm=m%60;
	
	printf("%d hours %d minutes",h,hm);
	
	return 0;
}
