#include <stdio.h>
int main() {
int a, b, count = 0;
printf("Enter any integer: ");
scanf("%d", &a);
b=a;
while (a>0) {
    count+=a&1;
    a>>=1;
}
printf("Number of 1s in the binary representation of %d are: %d\n", b, count);
    return 0;
}

