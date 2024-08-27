#include<stdio.h>

int main(){
	int arr[100],x,n,i,j,l;
	
	printf("Enter size of array : ");
	scanf("%d",&x);
	
	printf("Enter array elements : ");
	for(i=0;i<x;i++){
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<x;i++){
		printf("%d ",arr[i]);
	}
	
	printf("\nEnter no. of right rotations : ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		l = arr[x-1];
		for(j=x-1;j>0;j--){
			arr[j]=arr[j-1];
		}
		arr[0]=l;
	}
	
	for(i=0;i<x;i++){
		printf("%d ",arr[i]);
	}
	
	return 0;
}
