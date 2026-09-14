#include <stdio.h>

int main() {
// Variable declarations using appropriate data types
char name[50];
char rollNumber[20];
int age;
float height;
float gpa;
char section;

// Input collection using standard input functions
printf("Enter Student Name: ");
fgets(name, sizeof(name), stdin);

// Clean up trailing newline character from fgets
for(int i = 0; i < 50; i++) {
if(name[i] == '\n') {
name[i] = '\0';
break;
}
}

printf("Enter Roll Number: ");
scanf("%s", rollNumber);

printf("Enter Age: ");
scanf("%d", &age);

printf("Enter Height (in feet, e.g., 5.4): ");
scanf("%f", &height);

printf("Enter GPA: ");
scanf("%f", &gpa);

printf("Enter Section Character: ");
scanf(" %c", &section);

// Formatted output using specified alignment markers and escape sequences
printf("\n========================================\n");
printf("STUDENT INFORMATION\n");
printf("========================================\n");
printf("Name : %s\n", name);
printf("Roll No : %s\n", rollNumber);
printf("Age : %d\n", age);
printf("Height : %.1f\n", height);
printf("GPA : %.2f\n", gpa);
printf("Section : %c\n", section);
printf("========================================\n");

return 0;
}
