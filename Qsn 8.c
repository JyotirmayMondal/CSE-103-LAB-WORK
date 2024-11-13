//Write a C program to check whether the triangle is equilateral, isosceles or scalene triangle.


#include <stdio.h>
int main(){
float a , b , c;
 printf("Enter the three sides of the triangle: ");
 scanf("%f %f %f", &a, &b, &c);
if ((a + b > c) && (b + c > a) && (c + a > b)){

        if(a==b && b == c){printf("The triangle is equilateral");}
        else if(a==b || b==c || c==a ){ printf("The triangle is Isosceles");}
        else if (a!=b && b!=c && c!=a){ printf("The triangle is Scalene");}
}
else {printf("It does not form a Triangle");}




return 0;
}
