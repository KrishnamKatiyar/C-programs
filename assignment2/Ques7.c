#include"stdio.h"
#include"math.h"
void main(){
	int x1,x2,y1,y2,x,y,xx,yy,xy;
	float d;
	
	printf("Input x1 : ");
	scanf("%d",&x1);
	
	printf("Input y1 : ");
	scanf("%d",&y1);
	
	printf("Input x2 : ");
	scanf("%d",&x2);
	
	printf("Input y2 : ");
	scanf("%d",&y2);
	
	x=x1-x2;
	y=y1-y2;
	xx=pow(x,2);
	yy=pow(y,2);
	xy=xx+yy;
	d=sqrt(xy);
	
	printf("Distance between the said points : %.4f",d);
	
}
