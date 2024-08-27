#include<stdio.h>

int main()
{
	int i,j,p,n;
	
	scanf("%d",&n);
	
	for(i=2;i<=n;i++){
		
		p=1;
		
		for(j=2;j<=i/2;j++){
				
		if(i%j==0){
			p=0;
		}	
			
		}
		
		
		if(p==1){
			printf("%d ",i);
		}

	}
	
	
	

	return 0;
	
}
