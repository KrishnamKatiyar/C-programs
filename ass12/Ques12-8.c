#include<stdio.h>
int main(){
	int mat[3][3]={1,0,0,0,1,0,0,0,1},flag=0,i,j;
	printf("enter first matrix : \n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d ",mat[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(i==j){
				if(mat[i][j]!=1){
					flag=1;
					break;
				}
			}
			else if(mat[i][j]!=0){
				flag=1;
				break;
			}
		}
	}
	if(flag==1){
		printf("Not an identity matrix");
	}	
	else{
		printf("identity matrix");
	}
	return 0;
}
