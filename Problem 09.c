/*beecrowd | 1008 | Salary */
#include <stdio.h>
int main() {
int Employee_Number, Hours;
float Amount;
scanf("%d%d%f", &Employee_Number, &Hours, &Amount);
printf("NUMBER = %d\n", Employee_Number);
printf("SALARY = U$ %0.2f\n", Hours*Amount);
return 0;
}

