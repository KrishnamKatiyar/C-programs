#include<stdio.h>

int main()
{
	int i,j,p,n,sum=0;
	
	scanf("%d",&n);
	
	for(i=2;i<=n;i++){
		
		if(n%i==0){
			p=1;
		
		for(j=2;j<=i/2;j++){
				
		if(i%j==0){
			p=0;
			break;
		}	
			
		}
		
		
		if(p==1){
			printf("%d ",i);
		}
		}

	}

	return 0;
	
}
