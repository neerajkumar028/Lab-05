#include <stdio.h>
int main() {
int a, b, c;
printf("Enter any three integres: ");
scanf("%d%d%d", &a, &b, &c);
if(a>b)
{
    if(a>c)
    printf("%d is the greatest.", a);
    else
    printf("%d is the greatest.", c);
}
else if(b>c)
printf("%d is the greatest.", b);
else 
printf("%d is the greatest.", c);
return 0;
}

