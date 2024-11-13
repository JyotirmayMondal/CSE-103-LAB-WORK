#include <stdio.h>

int main(){
int x, y;
printf("Input X- point: ");
scanf("%d",&x);
printf("Input Y- point: ");
scanf("%d",&y);

if (x>0){
    if(y>0){printf("1st co-ordinate");}
    else if(y<0){printf("4th co-ordinate");}
    else{printf("(+) X-axis");}
}
else if(x<0){
    if(y>0){printf("2nd co-ordinate");}
    else if(y<0){printf("3rd co-ordinate");}
    else{printf("(-) X-axis");}
}
else if(x==0){
    if(y>0){printf("(+) Y-axis");}
    else if(y<0){printf("(-) Y-axis");}
}
else{printf("The origin");}


return 0;
}

