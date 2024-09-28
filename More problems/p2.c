#include <stdio.h>
int main() {
float att, assign, score, escore, finalgrade;
char grade;
printf("Enter attendance percentage (0-100): ");
scanf("%f", &att);
if (att<75)
    printf("Attendance is below 75 percent. The student cannot pass."); 
else 
{
printf("Enter assignment score (0-100): ");
scanf("%f", &assign);
printf("Enter exam score (0-100): ");
scanf("%f", &escore);
finalgrade=(att*0.2)+(assign*0.3)+(escore*0.5);
if (finalgrade>=90) 
    grade = 'A';
else if (finalgrade>=80) 
    grade = 'B';
else if (finalgrade>=70)
    grade = 'C';
else if (finalgrade >= 60) 
    grade = 'D';
else
    grade = 'F';
printf("Grade: %c", grade);   
}
return 0;
}

