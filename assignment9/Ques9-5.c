#include<stdio.h>

int main()
{
	int arr[10],i,max=-1,max2=-1;   //imagining that values inserted are all positive
	
	for(i=0;i<10;i++){
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<10;i++){
		if(max<arr[i])
		 max=arr[i];
	}
	
	for(i=0;i<10;i++){
		if(arr[i]>max2 && arr[i]!=max)
		 max2=arr[i];
	}	
	

    printf("Second Greatest element is %d  ",max2);
	
	return 0;
}
