#include<stdio.h>

int main()
{
	int ar[100],fr[100];
	int n,i,j,c;
	
	printf("length of array : ");
	scanf("%d",&n);
	
	printf("array elements : ");
	for(i=0;i<n;i++){
		scanf("%d",&ar[i]);
		fr[i] = -1;
	}
	
	for(i=0;i<n;i++){
		
		c=1;
		
		for(j=i+1;j<n;j++){
			if(ar[i] == ar[j]){
				c++;
				fr[j] = 0;
			}
		}
		
		if(fr[i] != 0)
		{
			fr[i] = c;
		}
		
	}
	
	for(i=0;i<n;i++)
	{
		if(fr[i] != 0){
			printf("freq. of %d is %d\n",ar[i],fr[i]);
		}
	}
	
	return 0;
}
