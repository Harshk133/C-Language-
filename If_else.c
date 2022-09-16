#include<stdio.h>

int main(){
//If-else Program!
int age;
printf("Enter Your Age:\n");

scanf("%d", &age);
printf("You have entered %d as your age.\n", age);

if(age > 18){
printf("You can Vote\n");
}
else{
printf("You cannot Vote!\n");
}

return 0;
}