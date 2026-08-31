#include <stdio.h>

int main() {
 double totalRevenue = 0.0;
 double totalExpenses = 0.0;
 double balance = 0.0;
 
 printf("MUNICIPAL BUDGET CALCULATOR\n\n");
 printf("Enter Total Revenue: ");
 scanf("%lf", &totalRevenue);
 printf("Enter Total Expenses: ");
 scanf("%lf", &totalExpenses);
 
 balance = totalRevenue - totalExpenses;

 printf("\n---------------------------------\n");
 printf("Total Revenue : %.2f\n", totalRevenue);
 printf("Total Expenses : %.2f\n", totalExpenses);
 printf("Balance : %.2f\n", balance);
 return 0;
}