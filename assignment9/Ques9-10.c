#include<stdio.h>

int main()
{
	int arr[100],i,pos,n=10;
	
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("Original array : \n");
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
	
	printf("Enter position to be deleted : ");
	scanf("%d",&pos);
	
	for(i=pos;i<n-1;i++){
		arr[i] = arr[i+1];
	}
	
	
	for(i=0;i<n-1;i++){
		printf("%d ",arr[i]);
	}
	
	return 0;
}
