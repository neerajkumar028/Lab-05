#include <stdio.h>
int main() {
int num;
printf("Enter any integer: ");
scanf("%d", &num);
num>0?printf("%d is Positive", num):(num<0?printf("%d is Negative.", num):printf("%d is Zero.", num));
return 0;
}

