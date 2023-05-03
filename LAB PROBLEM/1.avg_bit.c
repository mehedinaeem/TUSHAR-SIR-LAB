#include <stdio.h>

int main()
{
    int i1, i2;
    float f1, f2;

    // Input
    printf("Enter i1 and i2: ");
    scanf("%d %d", &i1, &i2);
    printf("Enter f1 and f2: ");
    scanf("%f %f", &f1, &f2);

    // Average of f1 and f2
    float average = (f1 + f2) / 2;
    printf("Average of f1 and f2 is: %.4f\n", average);

    // Bitwise-OR and Bitwise-AND of i1 and i2
    int bitwise_or = i1 | i2;
    int bitwise_and = i1 & i2;
    printf("Bitwise-OR and Bitwise-AND of i1 and i2 is: %d and %d\n", bitwise_or, bitwise_and);

    // Left-shift i1 by 2 places and Right-shift i2 by 1 place
    int left_shift = i1 << 2;
    int right_shift = i2 >> 1;
    printf("i1 shifted left by two places: %d and i2 shifted right by 1 place: %d\n", left_shift, right_shift);

    return 0;
}
