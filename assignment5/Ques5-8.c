#include<stdio.h>
int main()
{
	char ch;
	float a,b;
		scanf("%c",&ch);
	scanf("%1f %1f",&a,&b);

	
	switch(ch){
		case '+' :  printf("%f",a+b);
		            break; 
	    case '-' :  printf("%f",a-b);
		            break; 
		case '*' :  printf("%f",a*b);
		            break; 
		case '/' :  printf("%f",a/b);
		            break; 
 
		            
	}
	return 0;
}
