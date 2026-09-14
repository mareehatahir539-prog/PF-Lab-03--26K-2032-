#include <stdio.h>

int main() {
// 1. Variable declarations at the top to prevent Dev-C++ compilation errors
int intVal;
unsigned int uintVal;
float floatVal;
double doubleVal;
char charVal;
long int longVal;

// 2. Input Collection from the user
printf("Enter a signed integer: ");
scanf("%d", &intVal);

printf("Enter an unsigned integer: ");
scanf("%u", &uintVal);

printf("Enter a float value: ");
scanf("%f", &floatVal);

printf("Enter a double value: ");
scanf("%lf", &doubleVal);

printf("Enter a single character: ");
scanf(" %c", &charVal); // The space before %c handles buffer leftovers

printf("Enter a long integer: ");
scanf("%ld", &longVal);

// 3. Formatted Output Demonstrations
printf("\n========================================\n");
printf("DATA TYPE & FORMAT SPECIFIER DEMO\n");
printf("========================================\n");

// Displaying the standard integer using 4 different base format specifiers
printf("Integer in Decimal : %d\n", intVal);
printf("Integer in Octal : %o\n", intVal);
printf("Integer in Hex (lower) : %x\n", intVal);
printf("Integer in Hex (upper) : %X\n", intVal);

printf("Unsigned Integer : %u\n", uintVal);
printf("Character Value : %c\n", charVal);
printf("Long Integer : %ld\n", longVal);

printf("----------------------------------------\n");
printf("Floating-Point Formats (Float):\n");
printf("Using %%f : %f\n", floatVal);
printf("Using %%e : %e\n", floatVal);
printf("Using %%g : %g\n", floatVal);

printf("----------------------------------------\n");
printf("Floating-Point Formats (Double):\n");
printf("Using %%f : %f\n", doubleVal);
printf("Using %%e : %e\n", doubleVal);
printf("Using %%g : %g\n", doubleVal);
printf("========================================\n");

return 0;
}
