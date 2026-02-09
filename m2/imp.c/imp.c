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

