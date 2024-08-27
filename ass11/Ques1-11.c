#include<stdio.h>

int main(){
	int arr[100],x,n,i,j,f;
	
	printf("Enter size of array : ");
	scanf("%d",&x);
	
	printf("Enter array elements : ");
	for(i=0;i<x;i++){
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<x;i++){
		printf("%d ",arr[i]);
	}
	
	printf("\nEnter no. of left rotations : ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		f = arr[0];
		for(j=0;j<x-1;j++){
			arr[j]=arr[j+1];
		}
		arr[x-1]=f;
	}
	
	for(i=0;i<x;i++){
		printf("%d ",arr[i]);
	}
	
	return 0;
}
