#include <stdio.h>
int main() {
int num, sum=0, original;
printf("Enter a number: ");
scanf("%d", &num);
original=num;
while(num>0)
{
    sum+=num%10;
    num/=10;
}
printf("The sum of the digits in %d is %d", original, sum);
return 0;
}

