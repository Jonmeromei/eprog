#include <stdio.h>

int main(){
	int i, grades[5], num_ones=0;
	for(i=0; i<5; i++){
		printf("Num %d: ", i+1);
		scanf("%d", &grades[i]);
	}
	for(i=0; i<5; i++){
		if(grades[i] == 1)
		num_ones++;
	}
	printf("ones: %d\n", num_ones);
	printf("zeroes: %d\n", 5-num_ones);
}
