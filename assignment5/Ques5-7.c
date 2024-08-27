#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,d;
	float r1,r2,rl,im;
	scanf("%d%d%d",&a,&b,&c);
	
	d = b*b - 4*a*c;
	
	
	
	switch((d > 0) ? 1 : (d < 0) ? -1 : 0){
		case 1: r1 = (-b + sqrt(d)) / (2 * a);
                r2 = (-b - sqrt(d)) / (2 * a);
                printf("Roots are real and different.\n");
                printf("Root 1 = %.2lf\n", r1);
                printf("Root 2 = %.2lf\n", r2);
		        break;
		case -1: r1 = r2 = -b / (2 * a);
            printf("Roots are real and the same.\n");
            printf("Root = %.2lf\n", r1);
		         break;
		case 0: rl = -b / (2 * a);
                im = sqrt(-d) / (2 * a);
                printf("Roots are complex and different.\n");
                printf("Root 1 = %.2lf + %.2lfi\n", rl, im);
                printf("Root 2 = %.2lf - %.2lfi\n", rl, im);
		        break;

		default : printf("Invalid Input");
	
	}
	
	return 0;
	
}
