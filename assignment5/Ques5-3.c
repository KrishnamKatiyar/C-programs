#include<stdio.h>
int main()
{
	char ch;
	scanf("%c",&ch);

	if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')){
		switch(ch){
		case 'a': printf("Vowel");
		        break;
		case 'e': printf("Vowel");
		        break;
		case 'i': printf("Vowel");
		        break;
		case 'o': printf("Vowel");
		        break;
		case 'u': printf("Vowel");
		        break;
		case 'A': printf("Vowel");
		        break;
		case 'E': printf("Vowel");
		        break;
		case 'I': printf("Vowel");
		        break;
		case 'O': printf("Vowel");
		        break;
		case 'U': printf("Vowel");
		        break;

		default : printf("Consonant");
	
	}
	} else{
		printf("Invalid Input");
	}
	

	
	return 0;
	
}
