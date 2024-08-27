#include<stdio.h>
int main(){
	int arr[10],merge[10],i,j,n,arr1[10],size=0,n2;
	printf("enter the number of elements\n");
	scanf("%d",&n);
	size=n;
	printf("Enter the 1st array elements \n");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("enter the number of elements\n");
	scanf("%d",&n2);
	size+=n2;
	printf("Enter the 2nd array elements \n");
	for(i=0;i<n2;i++){
		scanf("%d",&arr1[i]);
	}
	j=0;
	for(i=0;i<n;i++){
		merge[j]=arr[i];
		j++;
	}
	for(i=0;i<n2;i++){
		merge[j]=arr1[i];
		j++;
	}
	for(i=0;i<size;i++){
		printf("%d ",merge[i]);
	}

	return 0;	
}

