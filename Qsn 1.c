//Input a number and display whether it is divisible 5 or not.

#include <stdio.h>

int main(){
int x;
printf("Input a number: ");
scanf("%d",&x);

if(x % 5 ==0){printf("%d is divisible by 5\n", x);}
else{printf("%d is not divisible by 5  ",x);}

return 0;
}
