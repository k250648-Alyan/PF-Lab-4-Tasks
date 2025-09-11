#include<stdio.h>
int main(){
	int temp;
	printf("Enter the temperature:\n");
	scanf("%d",&temp);
	 if(temp>30){	 
		printf("Hot Day");
    	} else {
		printf("Pleasant Day");
        }
	return 0;
}