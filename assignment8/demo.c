#include<stdio.h>
#include<math.h>
int main()
{
	int oN,n,sum=0,digits,l;
	scanf("%d",&n);
	oN = n;
	
	digits = log10(n) + 1;
	
	while(n){
		l = n%10;
		sum += pow(l,digits);
		n /= 10;
	}
	
	if(sum==oN){
		printf("armstrong");
	}
	else{
		printf("not armstrong");
	}
	
	
	return 0;
	
}
