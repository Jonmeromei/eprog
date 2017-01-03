#include<stdio.h>
int main(){
	
	int i=0;
	while(i<250000000){
		i++;
		if(i%2==0 && i%5==0 && i%7==0 && i%9==0 && i%11==0 && i%13==0 && i%16==0 && i%17==0 && i%19==0){
			printf("%d\n", i);
		}
	}

}  
