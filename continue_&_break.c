#include<stdio.h>

int main(){
printf("continue and break statements!\n");
int i, age;

//If there is only line on your for loop then there is no need to put curly braces..
//for(i=0;i<10;i++)
//printf("%d\n", i);

for(i=0;i<10;i++){
printf("Enter your age:\n");
scanf("%d", &age);
printf("%d\n", i);
//if(age>10){
//break;
//}

if(age>10){
continue;
}
printf("this get executed you know this");
printf("this get executed you know this");
printf("this get executed you know this");
printf("this get executed you know this");
printf("this get executed you know this");
}

return 0;
}