#include<stdio.h>
int main(){
	int salary,age;
		printf("Enter your salary:\n");
		scanf("%d",&salary);
		printf("Enter your Age:\n");
		scanf("%d",&age);
		if(salary>=40000){
			if(age>=25){
				printf("Your loan is accepted !!");
			} else{
					printf("Your loan is rejected !!");
			}
		}
		return 0;
}