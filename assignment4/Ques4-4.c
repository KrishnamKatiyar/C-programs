#include"stdio.h"
int main()
{
	char ch;
	scanf("%c",&ch);
	
	if(ch>='a' && ch<='z'){
		printf("Lower Case");
	} else if(ch>='A' && ch<='Z'){
		printf("Upper Case");
	}else{
		printf("Not alphabet");
	}
	
	return 0;	
}
