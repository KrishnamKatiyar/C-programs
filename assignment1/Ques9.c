#include"stdio.h"
int main(){
	int am, hun, fif, twen, ten, fiv, two, one;
	
	printf("Input the amount : ");
	scanf("%d",&am);
	
	hun=am/100;
	am=am%100;
	fif=am/50;
	am=am%50;
	twen=am/20;
	am=am%20;
	ten=am/10;
	am=am%10;
	fiv=am/5;
	am=am%5;
	two=am/2;
	am=am%2;
	one=am/1;
	am=am%1;
	
	printf(" There are\n %d Note(s) of 100.00 \n %d Note(s) of 50.00\n %d Note(s) of 20.00 \n %d Note(s) of 10.00\n %d Note(s) of 5.00 \n %d Note(s) of 2.00 \n %d Note(s) of 1.00 ",hun,fif,twen,ten,fiv,two,one);
	
	return 0;
	
}
