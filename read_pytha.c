#include<stdio.h>

main(){
	FILE *myFile;
	myFile = fopen("sample.txt", "r");
	
	int a;
	int b;
	int c;
	
	printf("value: ");
	fscanf(myFile, "%d" , &a);
	fscanf(myFile, "%d" , &b);
	
	printf("%d", c=sqrt((a*a) + (b*b)));
}
