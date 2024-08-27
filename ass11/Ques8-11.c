#include<stdio.h>

int main(){
	int m[3][3],i,j,sum=0;
	
	printf("Enter the matrix : \n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&m[i][j]);
		}
	}
	
	for(i=0;i<3;i++){
		sum += m[i][i];
	}
	
	printf("Sum is : %d",sum);
	
	
	
	return 0;
}
