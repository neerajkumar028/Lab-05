#include <stdio.h>
int main() {
int age;
char citizen;
printf("Enter your age: ");
scanf("%d", &age);
printf("Are you a citizen? (Enter 'y' if yes and 'n' if no): ");
scanf(" %c", &citizen);
if ((citizen=='Y' || citizen=='y') && age>=18)
printf("Eligible to vote.");
else if (age<18) 
printf("Not eligible to vote. You are under 18.");
else 
printf("Not eligible to vote. You are not a citizen.");
    return 0;
}

