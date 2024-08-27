#include"stdio.h"
#include"math.h"
int main()
{
	int a,b,c,disc;
	float  r1,r2,im,rl;
	
	scanf("%d%d%d",&a,&b,&c);
	
	disc = b*b - 4*a*c;
	
	if(disc>0){
		r1 = (-b + sqrt(disc)) / (2*a);
		r2 = (-b - sqrt(disc)) / (2*a);
		printf("root1 = %.1f root2 = %.1f",r1,r2);
	}
	else if(disc==0){
		r1=r2= -b/(2*a);
		printf("root1 = root2 = %.1f",r1);
	}
	else{
		rl = -b/(2*a);
		im = sqrt(-disc)/(2*a);
		printf("root1 = %.1f + %.1f i   root2 = %.1f - %.1f i",rl,im,rl,im);
	}
	

	return 0;	
}
