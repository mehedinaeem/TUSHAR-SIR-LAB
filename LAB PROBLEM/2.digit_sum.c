#include <stdio.h>

int main() {
    int num, digit1, digit2, digit3, sum;
    
    // Input
    printf("Enter a three-digit integer: ");
    scanf("%d", &num);
    
    // Extract digits and calculate sum
    digit1 = num / 100;
    digit2 = (num % 100) / 10;
    digit3 = num % 10;
    sum = digit1 + digit2 + digit3;
    
    // Output sum
    printf("Sum of the digits of the number is: %d\n", sum);
    
    return 0;
}
