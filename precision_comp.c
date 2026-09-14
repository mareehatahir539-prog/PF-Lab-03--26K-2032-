#include <stdio.h>

int main() {
// 1. Variable declarations at the top to prevent old compiler errors
float userFloat;
double userDouble;

// 2. Input collection from the user
printf("Enter a floating-point value (Float): ");
scanf("%f", &userFloat);

printf("Enter a high-precision value (Double): ");
scanf("%lf", &userDouble);

// 3. Formatted Precision Comparison Output using format specifiers
printf("\n========================================\n");
printf("PRECISION COMPARISON\n");
printf("========================================\n");

// Displaying Float values with altered precisions
printf("Float value:\n");
printf("Default : %f\n", userFloat);
printf("2 digits: %.2f\n", userFloat);
printf("4 digits: %.4f\n", userFloat);
printf("6 digits: %.6f\n", userFloat);

printf("Double value:\n");
printf("Default : %lf\n", userDouble);
printf("2 digits: %.2f\n", userDouble);
printf("4 digits: %.4f\n", userDouble);
printf("6 digits: %.6f\n", userDouble);
printf("========================================\n");

return 0;
}
