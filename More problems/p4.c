#include <stdio.h>
int main() {
int age;
float income;
int creditScore;
printf("Enter your age: ");
scanf("%d", &age);
printf("Enter your monthly income: ");
scanf("%f", &income);
printf("Enter your credit score: ");
scanf("%d", &creditScore);
if (age>=18 && age<=65) 
{
    if (income>=3000) 
    {
        if (creditScore>=700)
        printf("You are eligible for the loan.");
        else
        printf("You are not eligible for the loan due to low credit score.");
    } 
    else 
    printf("You are not eligible for the loan due to low income.");
} 
else 
printf("You are not eligible for the loan due to age restriction.);
return 0;
}

