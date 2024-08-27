#include<stdio.h>
#include<string.h>

int main(){
	char n[25],r[25];
	printf("Input any string : \n");
	gets(n);
	
	strcpy(r,n);
	strrev(r);
	
	if(strcmp(n,r)==0){
		printf("palindrome\n");
	}
	else{
		printf("not palindrome\n");
	}
	
	
	return 0;
}
