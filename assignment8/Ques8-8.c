#include<stdio.h>

int main()
{
	int i,j,p,n,sum=0;
	
	scanf("%d",&n);
	
	for(i=2;i<=n;i++){
		
		p=1;
		
		for(j=2;j<=i/2;j++){
				
		if(i%j==0){
			p=0;
			break;
		}	
			
		}
		
		
		if(p==1){
			sum += i;
		}

	}
	
	
	printf("Sum is : %d",sum);

	return 0;
	
}
