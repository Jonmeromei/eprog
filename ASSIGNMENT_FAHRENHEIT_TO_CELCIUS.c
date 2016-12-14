#include<stdio.h>

int main(){

double f, c;

printf("Enter the degree farenheit: ");
scanf("%lf", &f);

c = (f - 32.0)*(5.0/9.0);
printf("Value in degree celcius: %f", c);


}
