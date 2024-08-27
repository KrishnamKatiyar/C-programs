#include<stdio.h>
#include<string.h>

int main(){
	char n[25],toSearch;
	int i=0;
	printf("Input any string : \n");
	gets(n);
	
	toSearch = getchar();
	
	while(n[i]!='\0'){
		if(n[i]==toSearch){
			printf("%c is at %d\n",n[i],i);
		}
		i++;
	}
	
	return 0;
	
}
