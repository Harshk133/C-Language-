#include<stdio.h>
#define PI 3.14

int main(){
printf("Hello world!");
int a = 8;
float b = 7.234;
const float c = 0.123;
printf("The Value of a is %d and b is %10.4f\n", a, b);
printf("The Value of a is %d and b is %d\n", a, b);
//%c - character
//%f - float
//%d - integer
//%e - long
//%lf - double
//%LF - long double

printf("Here is the define value of PI is %d", PI);
return 0;
}