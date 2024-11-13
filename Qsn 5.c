//Qsn 5.Input three numbers and display the difference between the highest and lowest number.

#include <stdio.h>

int main(){
float x,y,z, diff;
printf("Input a number x: ");
scanf("%f",&x);
printf("Input a number y: ");
scanf("%f",&y);
printf("Input a number z: ");
scanf("%f",&z);
if(x>y && x>z && z<x && z<y){
        diff=x-z;
        printf("The difference is %f",diff);}


else if(x<y && x<z && z>x && z>y){
        diff=z-x;
        printf("The difference is %f",diff);}


else if(y>x && y>z && z<y && z<x){
        diff=y-z;
        printf("The difference is %f",diff);}


else if(y<x && y<z && z>y && z>x){
        diff=z-y;
        printf("The difference is %f",diff);}


else if(x>y && x>z && y<x && y<z){
        diff=x-y;
        printf("The difference is %f",diff);}

else if(x<y && x<z && y>x && y>z){
        diff=y-x;
        printf("The difference is %f",diff);}


return 0;
}

