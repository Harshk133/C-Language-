#include<stdio.h>

int main(){
//printf("Goto Statement that is \'Jump statement\'\n");
label:
 printf("We are inside the label\n!!");
printf("hello world!\n");

goto label;

return 0;
}