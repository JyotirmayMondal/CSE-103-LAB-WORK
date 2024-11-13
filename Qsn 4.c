//Qsn 4.Input a number and display whether that is perfect square or not.

#include <stdio.h>

int main(){
int x;
printf("Input a number: ");
scanf("%d",&x);
if(sqrt(x)*sqrt(x)==x){printf("The number is a Square");}
else{printf("The number is not a square");}

return 0;
}
