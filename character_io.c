#include <stdio.h>

int main() {
// 1. Variable declarations using char data type
char char1, char2, char3;

// 2. Input collection using getchar() one at a time
printf("Enter first character: ");
char1 = getchar();
while (getchar() != '\n'); // Clear the trailing newline from the input buffer

printf("Enter second character: ");
char2 = getchar();
while (getchar() != '\n'); // Clear the trailing newline from the input buffer

printf("Enter third character: ");
char3 = getchar();
while (getchar() != '\n'); // Clear the trailing newline from the input buffer

// 3. Formatted output using printing and putchar()
printf("--------------------------------\n");
printf("Characters Entered:\n");

printf("Character 1 : ");
putchar(char1);
printf("\n"); // Escape sequence for a new line

printf("Character 2 : ");
putchar(char2);
printf("\n");

printf("Character 3 : ");
putchar(char3);
printf("\n");
printf("--------------------------------\n");

return 0;
}
