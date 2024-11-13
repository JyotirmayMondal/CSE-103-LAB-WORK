//Write a C program to input basic salary of an employee and calculate its Gross salary
//according to following:
//Basic Salary <= 10000 : HRA = 20%, DA = 80%
//Basic Salary <= 20000 : HRA = 25%, DA = 90%
//Basic Salary  > 20000 : HRA = 30%, DA = 95%

#include<stdio.h>

int main(){
float basicsalary ,hra , da , grosssalary;
printf("Input Salary : ");
scanf("%f",&basicsalary);

if(basicsalary<=10000){
    hra=0.20 * basicsalary;
    da=0.80 * basicsalary;
    printf("20 percent HRA of the salary is : %.2f\n",hra);
    printf("80 percent DA of the salary is: %.2f\n",da);

}
else if(basicsalary<=20000){
    hra=0.25 * basicsalary;
    da=0.90 * basicsalary;
    printf("25 percent HRA of the salary is : %.2f\n",hra);
    printf("90 percent DA of the salary is: %.2f\n",da);

}
else{
    hra=0.30 * basicsalary;
    da=0.95 * basicsalary;
    printf("30 percent HRA of the salary is : %.2f\n",hra);
    printf("95 percent DA of the salary is: %.2f\n",da);

}

grosssalary=basicsalary + hra + da;
printf("The Gross Salary of the employee is : %.2f \n",grosssalary);


return 0;
}
