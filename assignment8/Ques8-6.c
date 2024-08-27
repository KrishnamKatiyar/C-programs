#include<stdio.h>

int main()
{
	int i,n;
	
	scanf("%d",&n);
	
	if(n==2){
		printf("prime");
	}
	else{
		for(i=2;i<=n;i++){
			if(n%i==0){
				printf("not prime");
				break;
			}
			else{
				printf("prime");
				break;
			}
		}
	}
	
	return 0;
	
}
