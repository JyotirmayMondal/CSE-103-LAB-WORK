//Write a C program to input all sides of a triangle and check whether triangle is valid or not.


#include <stdio.h>
int main(){
float a , b , c;
 printf("Enter the three sides of the triangle: ");
 scanf("%f %f %f", &a, &b, &c);
if ((a + b > c) && (b + c > a) && (c + a > b)){
        printf("It forms a Triangle");

}
else {printf("It does not form a Triangle");}




return 0;
}