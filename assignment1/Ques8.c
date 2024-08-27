#include"stdio.h"
int main(){
	int d , y , w ;
	
	printf("Number of days : ");
	scanf("%d",&d);
	
	y=d/365;
	d=d%365;
	w=d/7;
	d=d%7;
	
	printf("Years :%d \n Weeks : %d \n Days : %d",y,w,d);
	
	return 0;
	
}
