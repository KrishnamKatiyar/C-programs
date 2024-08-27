#include<stdio.h>
//void naturalNum(int *n){
//	if(*n==0) return;
//	printf("%d ",(*n)--);
//	naturalNum(n);
//	
//}
//
//int main(){
//	int num=10;
//	naturalNum(&num);
//	
//	return 0;
//	
//}

int i=1;
void naturalNum(int n){
	if(i==n+1) return;
	printf("%d ",(i++));
	naturalNum(n);
	
}

int main(){
	int num=10;
	naturalNum(num);
	
	return 0;
	
}
