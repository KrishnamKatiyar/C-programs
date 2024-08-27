#include<stdio.h>

int main()
{
	int ar[100];
	int n,i,j,c=0;
	
	printf("length of array : ");
	scanf("%d",&n);
	
	printf("array elements : ");
	for(i=0;i<n;i++){
		scanf("%d",&ar[i]);
	}
	
	for(i=0;i<n;i++){
		
		for(j=i+1;j<n;j++){
			if(ar[i] == ar[j]){
				c++;
				break;
			}
		}
		
        
		
	}
	
	printf("there are %d duplicate elements in array\n",c);
	

	return 0;
}
