#include<stdio.h>
#include<windows.h>
struct student{
	int std_no;
	char name[20];
	int marks[3];
};
int  add(struct student std[],int i){
	int sum=0,j;
	printf("enter the roll number\n");
	scanf("%d",&std[i].std_no);
	printf("enter the name\n");
	scanf("%s",std[i].name);
	printf("enter the marks");
	for(j=0;j<3;j++){
		scanf("%d",&std[i].marks[j]);
		sum+=std[i].marks[j];	
	}
	return sum;
}
void detail(struct student std[],int n){
	int i=0;
	for(i=0;i<n;i++){
		printf("\nroll number is %d \n name is %s\n",std[i].std_no,std[i].name);
		printf("Marks is : %d %d %d",std[i].marks[0],std[i].marks[1],std[i].marks[2]);
	}
}
void search(struct student std[],int n,int num){
	int i;
	for(i =0;i<n;i++){
		if(std[i].std_no==num)
		{
			printf("\n roll number is %d \n name is %s\n",std[i].std_no,std[i].name);
			printf("\nMarks is : %d %d %d",std[i].marks[0],std[i].marks[1],std[i].marks[2]);
		 	return;
		}
	}
	printf("\n NOT FOUND");
}
void topper(struct student std[],int sum[],int n){
	int i,max=-1,maxi=-1;
	for(i=0;i<n;i++){
		if(maxi<sum[i]){
			max=i;
			maxi=sum[i];
		}
	}
	printf("\n roll number is %d \n name is %s\n",std[max].std_no,std[max].name);
	printf("\nMarks is : %d %d %d",std[max].marks[0],std[max].marks[1],std[max].marks[2]);
	printf("\n Maximum marks is %d",sum[max]);
	return;
}
int main(){
	system("color B");
	int choice=1,sum[10]={0},i=0,num;
	struct student std[10];
	while(1){
		printf("\nenter your choice \n");
		printf("\n1) Add Student Details \n2) View all students details \n3) Search Student Details \n4) Name of Topper Student\n");
		scanf("%d",&choice);
		if(choice>4)break;
		if(choice==1){
			sum[i]=add(std,i);
			i++;
			continue;
		}
		if(choice==2){
			detail(std,i);
			continue;
		}
	    if(choice==3){
			printf("\n enter the roll number you want to search");
			scanf("%d",&num);
			search(std,i,num);
			continue;
		}
		if(choice==4){
			topper(std,sum,i);
			continue;
		}
	}
	return 0;
}
