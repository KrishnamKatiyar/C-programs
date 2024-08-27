#include<stdio.h>

int main()
{
	int arr[100],i,x,pos,n=10;
	
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("Original array : \n");
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
	
	printf("Enter position and value for the element : ");
	scanf("%d%d",&pos,&x);
	
	n++;
	
	for(i=n-1;i>=pos;i--){
		arr[i] = arr[i-1];
	}
	
	arr[pos-1] = x;
	
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	
	return 0;
}
