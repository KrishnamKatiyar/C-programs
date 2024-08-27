#include<stdio.h>

int main()
{
	int arr[10],i,c=0;
	
	for(i=0;i<10;i++){
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<10;i++){
		if(arr[i]<0)
		 c++;
	}
	
	printf("Negative : %d",c);
	
	return 0;
}
