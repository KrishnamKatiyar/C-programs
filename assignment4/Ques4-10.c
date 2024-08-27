#include"stdio.h"
int main()
{
	
	float a,b,c,d,e, p;
	scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
	
	p=((a+b+c+d+e)/500)*100;
	
	printf("%.1f\n",p);
	
	if(p>=90 && p<80){
		printf("Grade A");
	}
	else if(p>=80 && p<70){
		printf("Grade B");
	}
	else if(p>=70 && p<60){
		printf("Grade C");
	}
	else if(p>=60 && p<50){
		printf("Grade D");
	}
	else if(p>=50 && p>40){
		printf("Grade E");
	}
	else if(p<=40){
		printf("Grade F");
	}
	else{
		printf("Invalid input");
	}
	return 0;	
}
