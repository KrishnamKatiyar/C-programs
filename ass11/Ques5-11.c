#include<stdio.h>

int main(){
	int m1[3][3],n,i,j;
	
	printf("Enter the matrix : \n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&m1[i][j]);
		}
	}
	
	printf("Enter the number for multiplication : \n");
	scanf("%d",&n);
	
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			m1[i][j] *= n;
		}
	}
	
	printf("result matrix : \n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d ",m1[i][j]);
		}
		printf("\n");
	}
	
	
	return 0;
}
