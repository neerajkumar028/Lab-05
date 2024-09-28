#include <stdio.h>
int main() {
int num1, num2;
printf("Enter any two integer: ");
scanf("%d%d", &num1, &num2);
num1>num2?printf("%d is the greatest.", num1):printf("%d is the greatest.", num2);
return 0;
}

