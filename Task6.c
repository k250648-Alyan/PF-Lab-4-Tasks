#include<stdio.h>
int main(){
	int age;
	printf("Enter your age:\n");
	scanf("%d",&age);
	if(age>=18){
		printf("Eligible to Vote\n");
	} else{
		printf("Not eligible to Vote\n");
	}
	return 0;
}