#include<stdio.h>
int main(){
	int arr[10],n,i,ele,res=-1;
	printf("enter the number of elements\n");
	scanf("%d",&n);
	
	printf("Enter the  array elements \n");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("\nenter the element you want to search");
	scanf("%d",&ele);
	for(i=0;i<n;i++){
		if(arr[i]==ele)
		{
			res=i;
			break;
		}
	}
	if(res==-1)
	printf("\n Not Found");
	else
	printf("\n Found at %d",res);
	return 0;	
}

