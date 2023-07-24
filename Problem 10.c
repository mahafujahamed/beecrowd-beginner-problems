#include <stdio.h>
int main() {
int Employee_Name;
double Fixed_Salary, Total_Sales;
scanf("%s%lf%lf", &Employee_Name, &Fixed_Salary, &Total_Sales);
printf("TOTAL = R$ %0.2lf\n", Fixed_Salary+(Total_Sales*0.15));
return 0;
}
