#include<stdio.h>
int main(){
	int mat[3][3]={1,2,3,4,5,6,7,8,9},flag,i,j;
	printf("enter first matrix : \n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d ",mat[i][j]);
		}
		printf("\n");
	}
	printf("\nupper traingular matrix is \n");
	for(i=0;i<3;i++){
		flag=0;
		for(j=0;j<3;j++){
			if(flag==1){
				printf("%d ",mat[i][j]);
			}
			if(i==j){
				flag=1;
			}
		}
	}
	
	return 0;
}
