#include<stdio.h>
int main(){
	int mat[3][3]={1,2,3,4,5,6,7,8,9},flag,i,j,sum=0;
	printf("enter first matrix : \n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d ",mat[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<3;i++){
		flag=1;
		for(j=0;j<3;j++){
			if(i==j){
				flag=0;
			}
			if(flag==1){
				sum += mat[i][j];
			}
		}
	}
	printf("\nsum of lower traingular matrix is %d",sum);	
	return 0;
}
