## 1. Data Types

| Data Type | Description | Size (Typical) |
| :--- | :--- | :--- |
| `int` | Used to store integer values (whole numbers) without decimals. | 4 bytes |
| `float` | Used to store single-precision floating-point numbers (fractional/decimal numbers). | 4 bytes |
| `double` | Used to store double-precision floating-point numbers (highly precise decimals). | 8 bytes |
| `char` | Used to store a single character, enclosed in single quotes. | 1 byte |
| `bool` | Used to store boolean values (`true` or `false`). Requires `<stdbool.h>`. | 1 byte |
| `void` | Represents the absence of type or value; typically used for functions that return nothing. | 0 bytes |

---

## 2. Format Specifiers

| Format Specifier | Description |
| :--- | :--- |
| `%d` | Signed decimal integer |
| `%u` | Unsigned decimal integer |
| `%o` | Unsigned octal number |
| `%x` | Unsigned hexadecimal number (lowercase letters) |
| `%X` | Unsigned hexadecimal number (uppercase letters) |
| `%f` | Floating-point decimal number |
| `%e` | Scientific notation (exponential form, e.g., 1.2e+3) |
| `%c` | Single character |
| `%s` | String (sequence of characters) |
| `%ld` | Long signed decimal integer |

---

## 3. Input/Output Functions

### `scanf()`
Used to read formatted input from the standard input (usually the keyboard). It requires the memory address of the variable using the address-of operator (`&`).

### `printf()`
Used to send formatted output to the standard output (usually the screen or console screen). It formats strings and variables using specifiers.

### `getchar()`
Reads a single character from the standard input. It takes no arguments and returns the character read as an integer.

### `putchar()`
Writes a single character to the standard output. It takes the character to be printed as its parameter.

### `fgets()`
Reads a line of text or a full string from a specified stream (like standard input). It is safer than `gets()` because it prevents buffer overflow by specifying a maximum buffer limit.

### `puts()`
Writes a string to the standard output and automatically appends a new line (`\n`) character at the end of the text.

---

## 4. Escape Sequences

Here are five common escape sequences used in C:

* `\n` (New Line): Moves the cursor to the next line.
* `\t` (Horizontal Tab): Inserts a tab space.
* `\\` (Backslash): Displays a single backslash character.
* `\"` (Double Quote): Displays a literal double quotation mark inside a string.
* `\0` (Null Character): Signifies the end of a string in C.

---

## 5. Precision in Floating-Point Output

Precision for floating-point values specifies the exact number of digits that appear after the decimal point when printing a value with `printf()`.

To specify precision, insert a period `.` followed by the desired number of decimal places between the `%` sign and the `f` format specifier.

### Examples:
```c
float val = 5.12345;
printf("%.2f", val); // Outputs: 5.12 (rounds to 2 decimal places)
printf("%.4f", val); // Outputs: 5.1235 (rounds to 4 decimal places)
```
