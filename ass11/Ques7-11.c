#include<stdio.h>

int main(){
	int m1[3][3],m2[3][3],i,j,flag=1;
	
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
			if(m1[i][j]==m2[i][j]){
				flag = 0;
			}
		}
	}
	
	if(flag==0){
		printf("equal");
	}
	else{
		printf("not equal");
	}
	
	
	return 0;
}
