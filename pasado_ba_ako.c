#include <stdio.h> 
#include <string.h>

struct detail{
	char id[30];
	float grade;
};

struct student{  
	char name[30];
	struct detail info;
};

void displayMenu(){
	printf("0 - Exit\n");
	printf("1 - Write to file\n");
	printf("2 - Read file\n");
	printf("3 - Passed\n");
	printf("4 - Failed\n");
	printf("5 - invalid Grade\n");	
}

void writeToFile(){
	FILE *myFile;
	struct student stud;
	myFile = fopen("sample.txt", "a");
	printf("Enter student name: ");
	scanf("%s", &stud.name);
	printf("Enter id: ");
	scanf("%s", &stud.info.id);
	printf("Enter student Grade: ");
	scanf("%f", &stud.info.grade);
	printf("%s %s %.2f\n", stud.name, stud.info.id, stud.info.grade);
	fprintf(myFile, "%s %s %.2f\n", stud.name, stud.info.id, stud.info.grade);	
	fclose(myFile);
}

void readFromFile(){
	struct student stud;
	FILE *myFile;
	myFile = fopen("sample.txt", "r");
    if(myFile == NULL){
    	printf("Error: File does not exist");
    	exit(1);
	}
	char temp[128];
	while (fgets(temp, sizeof temp, myFile) != NULL) {
		sscanf(temp, "%s %s %f", &stud.name, &stud.info.id, &stud.info.grade);
		printf("%s %s %f\n", stud.name, stud.info.id, stud.info.grade);
	}
	fclose(myFile);
}

void readPassed(){
	struct student stud;
	FILE *myFile;
	myFile = fopen("sample.txt", "r");
    if(myFile == NULL){
    	printf("Error: File does not exist");
    	exit(1);
	}
	char temp[128];
	while (fgets(temp, sizeof temp, myFile) != NULL) {
			sscanf(temp, "%s %s %f", &stud.name, &stud.info.id, &stud.info.grade);
			if((stud.info.grade>=75)&&(stud.info.grade<=100)){
				printf("%s %s %f\n", stud.name, stud.info.id, stud.info.grade);
			}
	}
	fclose(myFile);
}

void readFailed(){
	struct student stud;
	FILE *myFile;
	myFile = fopen("sample.txt", "r");
    if(myFile == NULL){
    	printf("Error: File does not exist");
    	exit(1);
	}
	char temp[128];
	while (fgets(temp, sizeof temp, myFile) != NULL) {
			sscanf(temp, "%s %s %f", &stud.name, &stud.info.id, &stud.info.grade);
			if((stud.info.grade>0)&&(stud.info.grade<75)){
				printf("%s %s %f\n", stud.name, stud.info.id, stud.info.grade);
			}
	}
	fclose(myFile);
}

void readInvalid(){
	struct student stud;
	FILE *myFile;
	myFile = fopen("sample.txt", "r");
    if(myFile == NULL){
    	printf("Error: File does not exist");
    	exit(1);
	}
	char temp[128];
	while (fgets(temp, sizeof temp, myFile) != NULL) {
			sscanf(temp, "%s %s %f", &stud.name, &stud.info.id, &stud.info.grade);
			if((stud.info.grade>0)||(stud.info.grade>100)){
				printf("%s %s %f\n", stud.name, stud.info.id, stud.info.grade);
			}
	}
	fclose(myFile);
}
int main (){	
    int choice = 1;
    
    displayMenu();
    scanf("%d", &choice);
    while(choice != 0){
    	switch(choice){
    		case 0: 
    			exit(1);
    			break;
    		case 1: 
    			writeToFile();
    			break;
    		case 2: 
    			readFromFile();
    			break;
    		case 3:
    			readPassed();
    			break;
    		case 4:
    			readFailed();
    			break;
    		case 5:
    			readInvalid();
    			break;
		}
		displayMenu();
    	scanf("%d", &choice);
	}    
} 
