#include<stdio.h>

int main()
{
	int arr[10],arr2[10],i;
	
	for(i=0;i<10;i++){
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<10;i++){
		arr2[i]=arr[i];
	}
	for(i=0;i<10;i++){
		printf("%d ",arr2[i]);
	}
	return 0;
}
