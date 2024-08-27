#include<stdio.h>
#include<string.h>

int main(){
	char n[50];
	int al = 0,d=0,s=0,i;
	
	printf("Input any string : \n");
	gets(n);
	
	while(n[i]!='\0'){
		if(n[i]>='a' && n[i]<='z' || n[i]>='A' && n[i]<='Z'){
			al++;
		}
		else if(n[i]>='0' && n[i]<='9'){
			d++;
	    }
	    else{
	    	s++;
		}
		
		
		
		i++;
	}
	
	printf("alphabets = %d\n",al);
	printf("digits = %d\n",d);
    printf("special characters = %d\n",s);
	
	
	return 0;
}
