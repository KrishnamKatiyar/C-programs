#include<stdio.h>

int main(){
	int m1[3][3],m2[3][3],m3[3][3],i,j,k;
	
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
			m3[i][j] = 0;
			for(k=0;k<3;k++){
				m3[i][j] += m1[i][k] * m2[k][j];
			}
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
