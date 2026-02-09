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
