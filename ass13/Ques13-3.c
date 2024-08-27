#include<stdio.h>
#include<string.h>

int main(){
	char name1[25] = "Tony Stark";
	char name2[25];
	
	strcpy(name2,name1);
	
	printf("%s\n",name2);
	
	return 0;
}
