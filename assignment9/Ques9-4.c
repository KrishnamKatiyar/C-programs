#include<stdio.h>

int main()
{
	int arr[10],i,max=-1,min=1000000;   //imagining that values inserted are in the range 1 <= n >= 10000000
	
	for(i=0;i<10;i++){
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<10;i++){
		if(min>arr[i])
		 min=arr[i];
		if(max<arr[i])
		 max=arr[i];
	}
	

    printf("MAX is %d and MIN is %d  ",max,min);
	
	return 0;
}
