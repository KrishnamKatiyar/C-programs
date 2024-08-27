#include<stdio.h>
int main(){
	int arr[10],even[10],odd[10],s,e,temp,n,i,j,k;
	printf("enter the number of elements\n");
	scanf("%d",&n);
	
	printf("Enter the 1st array elements \n");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	j=0,k=0;
	for(i=0;i<n;i++){
		if(arr[i]%2==0)
		even[j++]=arr[i];
		else
		odd[k++]=arr[i];
	}
	printf("odd elements ");
	for(i=0;i<k;i++){
		printf("%d ",odd[i]);
	}
	printf("\n even elements ");
	for(i=0;i<j;i++){
		printf("%d ",even[i]);
	}

	return 0;	
}

