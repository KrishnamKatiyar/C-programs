#include<stdio.h>
#include<string.h>

int main(){
	char name1[25] = "Tony Stark";
	char name2[25] = "Iron Man";
	
	printf("%s\n",name1);
	printf("%s\n",name2);
	
	if(strcmp(name1,name2)==0){
		printf("equal\n");
	}
	else{
		printf("not equal\n");
	}
	
	
	
	return 0;
}
