#include<stdio.h>
#include<math.h>
int main()
{
	int n ,f, d,l,sn;
	scanf("%d",&n);
	printf("Entered number is : %d\n",n);
	
	
	l = n%10;
	
	f=n;
	
	while(f>=10){
		f = f/10;
	}
	
	printf("first digit : %d\n",f);
	printf("last digit : %d\n",l);
	
	d =  log10(n);
	
	sn = l;
	sn *= pow(10,d);
	sn += n % ((int)pow(10,d));
	sn -= l;
	sn += f;
	
	printf("Swapped number is : %d",sn);
	  
	return 0;
}
