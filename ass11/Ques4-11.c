#include<stdio.h>

int main(){
	int m1[3][3],m2[3][3],m3[3][3],i,j;
	
	printf("Enter first matrix : \n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&m1[i][j]);
		}
	}
	
	printf("Enter second matrix : \n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&m2[i][j]);
		}
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			m3[i][j] = m1[i][j] - m2[i][j];
		}
	}
	
	printf("sub matrix : \n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d ",m3[i][j]);
		}
		printf("\n");
	}
	
	
	return 0;
}
