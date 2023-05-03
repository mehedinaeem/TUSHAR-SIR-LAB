#include <stdio.h>

int main() {
    int r1, c1, r2, c2;

    printf("A matrix row & column: ");
    scanf("%d %d", &r1, &c1);

    printf("B matrix row & column: ");
    scanf("%d %d", &r2, &c2);

    if (c1 == r2) {
        int A[r1][c1], B[r2][c2], C[r1][c2];

        // Get input from the user for matrix A
        printf("Enter matrix A elements:\n");
        for (int i = 0; i < r1; i++) {
            for (int j = 0; j < c1; j++) {
                scanf("%d", &A[i][j]);
            }
        }

        // Get input from the user for matrix B
        printf("Enter matrix B elements:\n");
        for (int i = 0; i < r2; i++) {
            for (int j = 0; j < c2; j++) {
                scanf("%d", &B[i][j]);
            }
        }

        // Multiply matrices A and B
        for (int i = 0; i < r1; i++) {
            for (int j = 0; j < c2; j++) {
                C[i][j] = 0;
                for (int k = 0; k < c1; k++) {
                    C[i][j] += A[i][k] * B[k][j];
                }
            }
        }

        // Display the resultant matrix
        printf("Resultant matrix:\n");
        for (int i = 0; i < r1; i++) {
            for (int j = 0; j < c2; j++) {
                printf("%d ", C[i][j]);
            }
            printf("\n");
        }

        //check take input or not
         printf("Do you want to take input again (y/n): ");
        char c;
        scanf(" %c", &c);
        if (c == 'y') {
            main();
        }
        else
        {
            printf("terminate the program");
        }
    }
    else {
        printf("multiplication is not possible for these matrices\n");
        printf("Do you want to take input again (y/n): ");
        char c;
        scanf(" %c", &c);
        if (c == 'y') {
            main();
        }
        else
        {
            printf("terminate the program");
        }
    }

    return 0;
}
