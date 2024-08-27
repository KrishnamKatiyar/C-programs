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
		sum = 0;
		for(j=0;j<3;j++){
			sum += m[i][j];
		}
		printf("Sum of row %d is %d\n",(i+1),sum);
	}
	
	for(i=0;i<3;i++){
		sum = 0;
		for(j=0;j<3;j++){
			sum += m[j][i];
		}
		printf("Sum of row %d is %d\n",(j+1),sum);
	}
	
	return 0;
}
