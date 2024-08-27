#include<stdio.h>
#include<math.h>
struct point{
	int x;
	int y;
}x1,x2,y_1,y2;

int main(){
	float Y,X,z;
	printf("enter x1 and y1 : ");
	scanf("%d %d",&x1.x,&y_1.y);
	printf("enter x2 and y2 : ");
	scanf("%d %d",&x2.x,&y2.y);
	X=(float)(x2.x)-(float)(x1.x);
	Y=(float)(y2.y)-(float)(y_1.y);
	X=pow(X,2);
	Y=pow(Y,2);
	z=sqrt(X+Y);
	printf("%.2f",z);
	
	return 0;
}
