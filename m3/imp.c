/*
Program Name: Declaration, Initialization, Input and Output of 1D and 2D Arrays
*/

#include <stdio.h>

int main() {
    int a1[5];        // 1D array
    int a2[2][3];     // 2D array (2 rows, 3 columns)

    /* Input for 1D array */
    printf("Enter 5 elements of 1D array:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &a1[i]);
    }

    /* Input for 2D array */
    printf("Enter elements of 2D array (2x3):\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &a2[i][j]);
        }
    }

    /* Printing 1D array (1M) */
    printf("\nPrinting 1D array:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", a1[i]);
    }

    /* Printing 2D array (2M) */
    printf("\n\nPrinting 2D array:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", a2[i][j]);
        }
        printf("\n");
    }

    return 0;
}
-----------------------------------------------------------------------------------------------------
/*
Program Name: Passing 2D Array to Function
*/
#include <stdio.h>

void display2D(int a[][3], int r, int c) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int mat[2][3] = { {1, 2, 3}, {4, 5, 6} };

    printf("\n2D Array elements:\n");
    display2D(mat, 2, 3);

    return 0;
}
// output
// 1D Array elements:
// 10 20 30 40 50

// 2D Array elements:
// 1 2 3
// 4 5 6
-----------------------------------------------------------------------------------------------------------


 
