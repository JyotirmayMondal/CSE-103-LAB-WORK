//Write a C program to input a number indicating income of a person and calculate tax with the given following conditions.
//if income is less then, 1,50,000 then no tax
//if taxable income is in the range 1,50,001-300,000 then charge 10% tax
//if taxable income is in the range 3,00,001-500,000 then charge 20% tax
//if taxable income is above 5,00,001 then charge 30% tax.

#include<stdio.h>
int main(){
float income , tax , grossincome ;
printf("Input Income : ");
scanf("%f",&income);
if(income<=150000){
        printf("No Tax added\n");
        printf("Persons Income is : %.2f",income);
}
else if(income>=150001 && 300000>=income){
        tax=(income-150000)*0.1;
        printf("10 percent Tax added:%f\n",tax);
        grossincome=income-tax;
        printf("Persons Income is : %.2f",grossincome);
}
else if(income>=300001 && 500000>=income){
        tax=(150000*0.1)+(income-300000)*0.2;
        printf("20 percent Tax added:%f\n",tax);
        grossincome=income-tax;
        printf("Persons Income is : %.2f",grossincome);
}
else if(income>=500001){
        tax=(150000*0.1)+(200000*0.2)+((income-500000)*0.3);
        printf("30 percent Tax added:%f\n",tax);
        grossincome=income-tax;
        printf("Persons Income is : %.2f",grossincome);
}
return 0;
}

