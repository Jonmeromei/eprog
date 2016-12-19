#include<stdio.h>
int main()
{
	int grade;
	
	printf("Enter a number: ");
	scanf("%d", &grade);
	
	if (grade%3 == 0){
		printf("Ed");	
	
	}if (grade%5 == 0){
		printf("Pogi");
		
	}if (grade%3%5 == 0){
		printf("Ed pogi");
		
	}else{
		printf("Not divisible");
	}
	
}
