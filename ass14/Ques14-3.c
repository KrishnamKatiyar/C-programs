#include<stdio.h>
int i=1;
int sum =0;
void naturalNumSum(int n){
	if(i==n+1) return;
	sum = sum + i;
	i++;
	naturalNumSum(n);
	
}

int main(){
	int r;
	printf("Enter range : ");
	scanf("%d",&r);
	naturalNumSum(r);
	
	printf("Sum is %d",sum);
	
	return 0;
	
}
