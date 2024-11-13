//Qsn 5.Input three numbers and display the difference between the highest and lowest number.

#include <stdio.h>

int main (){
int a,b,c, highest , lowest, diff;
printf("Input a: ");
scanf("%d",&a);
printf("Input b: ");
scanf("%d",&b);
printf("Input c: ");
scanf("%d",&c);

if(a>=b && a>=c){highest= a;}
else if(b>=a && b>=c){highest= b;}
else if(c>=a && c>=b){highest= c;}

if(a<=b && a<=c){lowest= a;}
else if(b<=a && b<=c){lowest= b;}
else if(c<=a && c<=b){lowest= c;}


diff= highest - lowest;
printf("The highest number is : %d\n", highest);
printf("The lowest number is : %d\n", lowest);
printf("The difference between the highest and the lowest is : %d\n",diff);

return 0;
}
