#include<stdio.h>
int main(){
	int arr[10],rev[10],s,e,temp,n,i;
	printf("enter the number of elements\n");
	scanf("%d",&n);
	
	printf("Enter the 1st array elements \n");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	s=0,e=n-1;
	while(s<e){
		temp=arr[s];
		arr[s]=arr[e];
		arr[e]=temp;
		s++;
		e--;
	}
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}

	return 0;	
}

