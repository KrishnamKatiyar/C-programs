#include<stdio.h>

int main()
{
	int arr[10],i ,e=0,o=0;
	
	for(i=0;i<10;i++){
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<10;i++){
		if(i%2==0)
		 e++;
		else
		 o++;
	}
	
	
	printf("Even are - %d\n",e);
	printf("Odd are - %d\n",o);
	
	return 0;
}
