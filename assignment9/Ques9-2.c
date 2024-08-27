#include<stdio.h>

int main()
{
	int arr[10],i;
	
	for(i=0;i<10;i++){
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<10;i++){
		if(arr[i]<0)
		 printf("%d ",arr[i]);
	}
	
	return 0;
}
