#include<stdio.h>
int main(){
	int mat[3][3]={1,2,3,4,5,6,7,8,9},temp,i,j;
	printf("enter first matrix : \n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d ",mat[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<3;i++){
		temp=mat[i][i];
		mat[i][i]=mat[i][3-i-1];
		mat[i][3-i-1]=temp;
	}
	
	printf("after\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d ",mat[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
