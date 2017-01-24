#include<stdio.h>

int main(){
	int i, num;
	printf("input: ");
	scanf("%d", &i);
	while(i!=0){
		printf("%d\n", i%10);
		i/=10;
	}
}
