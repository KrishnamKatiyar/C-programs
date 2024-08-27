#include<stdio.h>
int i=1;
void even(int n){
	if(i==n+1) return;
	if(i%2==0){
		printf("%d ",i);
	}
	i++;
	even(n);
	
}

void odd(int n){
	if(i==n+1) return;
	if(i%2!=0){
		printf("%d ",i);
	}
	i++;
	odd(n);
	
}

int main(){
	int r;
	printf("Enter range : ");
	scanf("%d",&r);
	printf("Odd no. are : ");
	odd(r);
	i=1;
	printf("\n\n");
	printf("Even no. are : ");
	even(r);
	
	return 0;
	
}
