#include<stdio.h>
int main(){
	
	int i=0;
	while(1){
		i++;
		if(i%6==0 && i%8==0 && i%9==0 && i%11==0 && i%13==0 && i%14==0 && i%15==0 && i%17==0 && i%19==0 && i%20==0){
			printf("%d\n", i);
			break;
		}
	}
}
