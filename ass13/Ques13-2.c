#include<stdio.h>
#include<string.h>

int main(){

	char fName[25] = "Tony";
	char lName[25] = " Stark";
	
 	printf("first name is %s\n",fName);
 	printf("last name is %s\n",lName);
 	
 	printf("full name is %s\n",strcat(fName,lName));
 	

	
	return 0;
