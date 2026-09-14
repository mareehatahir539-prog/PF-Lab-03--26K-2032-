## 1. Display Student Information Using Different Data Types
```text
START
DECLARE integer student_id = 12345
DECLARE float student_gpa = 3.75
DECLARE character student_grade = 'A'

PRINT "Student ID: ", student_id
PRINT "Student GPA: ", student_gpa
PRINT "Student Grade: ", student_grade
END
```

---

## 2. Read and Display a Character Using getchar() and putchar()
```text
START
DECLARE character input_char

PRINT "Enter a single character: "

input_char = CALL getchar()

PRINT "The character you entered is: "

CALL putchar(input_char)
END
```

---

## 3. Display a Floating-Point Value Using Different Precision Settings
```text
START

DECLARE float pi_value = 3.14159265

PRINT "Value with default precision: ", pi_value
PRINT "Value rounded to 2 decimal places: ", FORMAT(pi_value, "%.2f")
PRINT "Value rounded to 4 decimal places: ", FORMAT(pi_value, "%.4f")
END
```
