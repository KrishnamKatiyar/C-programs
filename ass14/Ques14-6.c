#include<stdio.h>
struct student{
	int marks[5];
	char grade;
	char sname[25];
}s[50];

int main(){
	int i,j;
	printf("Enter the information : \n");
	
	for(i=0;i<3;i++){
		printf("\nFor student %d :\n",i+1);
		printf("enter name : ");
		scanf("%s",&s[i].sname);
		for(j=0;j<3;j++){
			printf("enter marks for %d subject : ",j+1);
			scanf("%d",&s[i].marks[j]);
		}
		printf("enter grade : ");
		scanf("\n%c",&s[i].grade);
	}
	printf("\n\n");
	for(i=0;i<3;i++){
		printf("student %d \n",i+1);
		printf("name : ");
		printf("%s\n",s[i].sname);
		for(j=0;j<3;j++){
			printf("marks for %d subject : ",j+1);
			printf("%d\n",s[i].marks[j]);
		}
		printf("grade : ");
		printf("%c\n",s[i].grade);
		
		printf("\n\n");
	}
	
	return 0;
}


// for full name use temp. variable for storing name using gets , then strcpy it to s[i].sname
