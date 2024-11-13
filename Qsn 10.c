//Write a C program to input angles of a triangle and check whether triangle is valid or not.

#include <stdio.h>
int main(){
float a , b , c;
 printf("Enter the three angles of the triangle: ");
 scanf("%f %f %f", &a, &b, &c);
if ((a + b + c)==180 ){
        printf("It forms a Triangle");

}
else {printf("It does not form a Triangle");}




return 0;
}

