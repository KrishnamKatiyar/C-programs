#include<stdio.h>
#include<string.h>

int main(){
	char n[50];
	int v = 0,c = 0,i;
	
	printf("Input any string : \n");
	gets(n);
	
	while(n[i]!='\0'){
		if(n[i]>='a' && n[i]<='z' || n[i]>='A' && n[i]<='Z'){
			if(n[i]=='a' || n[i]=='e' || n[i]=='i' || n[i]=='o' || n[i]=='u' || n[i]=='A' || n[i]=='E' || n[i]=='I' || n[i]=='O' || n[i]=='U'){
			   v++;
		    }
	        else{
	     	   c++;
		    }
		}
		
				
		i++;
	}
	
	printf("vowels = %d\n",v);
	printf("consonants = %d\n",c);
	
	
	return 0;
}
