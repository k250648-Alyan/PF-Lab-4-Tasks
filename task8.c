#include<stdio.h>
int main(){
	int attendancePercentage,internalMarks;
	printf("Enter attendance:\n");
	scanf("%d",&attendancePercentage);
	printf("Enter Internal marks:\n");
	scanf("%d",&internalMarks);
	 if(attendancePercentage>= 75){	 
    	if(internalMarks>=40) {
		printf("Student can appear in the exam");
         } else{
           printf("Student can not appear in the exam");
        	} 
         }
	return 0;
}