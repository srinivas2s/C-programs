/*Develop a C program to print numbers from 1 to 10 using for loop*/

#include <stdio.h>

int main() {
    int i;
    for (i = 1; i <= 10; i++) {
        printf("%d\n", i);
    }
    return 0;
}

 /*Develop a C program to print "VVCE" 10 times using for loop.*/

 #include <stdio.h>

int main() {
    int i;
    for (i = 1; i <= 10; i++) {
        printf("VVCE\n");
    }
    return 0;
}


/* Program Name: Check Voting Eligibility */

#include <stdio.h>

int main() {
    int age;

    printf("Enter age: ");
    scanf("%d", &age);

    if (age >= 18) {
        printf("Eligible to vote");
    } else {
        printf("Not eligible to vote");
    }

    return 0;
}

/* Program Name: Largest of Three Numbers */

#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b) {
        if (a > c)
            printf("Largest number is %d", a);
        else
            printf("Largest number is %d", c);
    } else {
        if (b > c)
            printf("Largest number is %d", b);
        else
            printf("Largest number is %d", c);
    }

    return 0;
}

/* Program Name: Check Leap Year */

#include <stdio.h>

int main() {
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("Leap year");
    } else {
        printf("Not a leap year");
    }

    return 0;
}

/* Program Name: Height Categorization */

#include <stdio.h>

int main() {
    int height;

    printf("Enter height in centimetres: ");
    scanf("%d", &height);

    if (height < 150) {
        printf("Category: Dwarf");
    } else if (height >= 150 && height < 165) {
        printf("Category: Average heighted");
    } else if (height >= 165 && height <= 200) {
        printf("Category: Taller");
    } else {
        printf("Category: Abnormal height");
    }

    return 0;
}

/* Program Name: Sum of First 10 Numbers using while loop */

#include <stdio.h>

int main() {
    int i = 1, sum = 0;

    while (i <= 10) {
        sum = sum + i;
        i++;
    }

    printf("Sum of first 10 numbers = %d", sum);
    return 0;
}


/* Program Name: Sum and Average of First N Natural Numbers using do-while loop */

#include <stdio.h>

int main() {
    int n, i = 1, sum = 0;
    float average;

    printf("Enter value of N: ");
    scanf("%d", &n);

    do {
        sum = sum + i;
        i++;
    } while (i <= n);

    average = (float)sum / n;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f", average);

    return 0;
}

/* Program Name: Check if Number is Positive, Negative, or Zero*/

#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num > 0) {
        printf("The number is Positive");
    }
    else if (num < 0) {
        printf("The number is Negative");
    }
    else {
        printf("The number is Zero");
    }

    return 0;
}

/* Program Name: Check if an Alphabet is a Vowel or Consonant*/

#include <stdio.h>

int main() {
    char ch;

    printf("Enter an alphabet: ");
    scanf(" %c", &ch);

    switch (ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("The alphabet is a Vowel");
            break;

        default:
            printf("The alphabet is a Consonant");
    }

    return 0;
}

/* Program Name: Display a digit (0 to 9) as word using switch statement */

#include <stdio.h>

int main() {
    int digit;

    printf("Enter a digit (0 to 9): ");
    scanf("%d", &digit);

    switch (digit) {
        case 0: printf("Zero"); break;
        case 1: printf("One"); break;
        case 2: printf("Two"); break;
        case 3: printf("Three"); break;
        case 4: printf("Four"); break;
        case 5: printf("Five"); break;
        case 6: printf("Six"); break;
        case 7: printf("Seven"); break;
        case 8: printf("Eight"); break;
        case 9: printf("Nine"); break;
        default: printf("Invalid digit");
    }

    return 0;
}

/*  Program Name: Display month name using switch statement */

#include <stdio.h>

int main() {
    int month;

    printf("Enter month number (1 to 12): ");
    scanf("%d", &month);

    switch (month) {
        case 1: printf("January"); break;
        case 2: printf("February"); break;
        case 3: printf("March"); break;
        case 4: printf("April"); break;
        case 5: printf("May"); break;
        case 6: printf("June"); break;
        case 7: printf("July"); break;
        case 8: printf("August"); break;
        case 9: printf("September"); break;
        case 10: printf("October"); break;
        case 11: printf("November"); break;
        case 12: printf("December"); break;
        default: printf("Invalid month number");
    }

    return 0;
}

/* Program Name: Scientific Calculator using switch statement */

#include <stdio.h>

int main() {
    int choice, a, b, i, fact = 1;
    float result;

    printf("Scientific Calculator\n");
    printf("1. Addition (+)\n");
    printf("2. Subtraction (-)\n");
    printf("3. Multiplication (x)\n");
    printf("4. Division (/)\n");
    printf("5. Modulus (%%)\n");
    printf("6. Factorial (!)\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {

        case 1:
            printf("Enter two numbers: ");
            scanf("%d %d", &a, &b);
            result = a + b;
            printf("Result = %.2f", result);
            break;

        case 2:
            printf("Enter two numbers: ");
            scanf("%d %d", &a, &b);
            result = a - b;
            printf("Result = %.2f", result);
            break;

        case 3:
            printf("Enter two numbers: ");
            scanf("%d %d", &a, &b);
            result = a * b;
            printf("Result = %.2f", result);
            break;

        case 4:
            printf("Enter two numbers: ");
            scanf("%d %d", &a, &b);
            if (b != 0)
                printf("Result = %.2f", (float)a / b);
            else
                printf("Division by zero not possible");
            break;

        case 5:
            printf("Enter two numbers: ");
            scanf("%d %d", &a, &b);
            printf("Result = %d", a % b);
            break;

        case 6:
            printf("Enter a number: ");
            scanf("%d", &a);
            for (i = 1; i <= a; i++) {
                fact = fact * i;
            }
            printf("Factorial = %d", fact);
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}
