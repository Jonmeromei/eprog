#include<stdio.h>

int main(){
	
	int i, j, num;
	printf("input num: ");
	scanf("%d", &num);
	for(i=0; i<num; i++){
		for(j=0; j<=i; j++){
			printf("*");
		}
		printf("\n");
		
	}
		for(i=num; i>0; i--){
			for(j=i; j>1; j--){
			printf("*");
		}
		printf("\n");
	}
	system("Pause");
}
