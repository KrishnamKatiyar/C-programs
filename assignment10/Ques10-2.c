#include<stdio.h>

int main()
{
	int ar[100];
	int n,i,j,c;
	
	printf("length of array : ");
	scanf("%d",&n);
	
	printf("array elements : ");
	for(i=0;i<n;i++){
		scanf("%d",&ar[i]);
	}
	
	printf("\n\n");
	
	for(i=0;i<n;i++){
		
		c=0;
		
		for(j=0;j<n+1;j++){
			if(i!=j){
				if(ar[i] == ar[j]){
				c++;
			}
			}
		}
		
		if(c == 0)
		{
			printf("%d ",ar[i]);
		}
		
	}
	

	
	return 0;
}
