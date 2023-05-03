#include <stdio.h>

int main() {
    int num, digit, sum = 0;
    
    // Input
    printf("Enter a three-digit integer: ");
    scanf("%d", &num);
    
    // Extract digits and calculate sum
    while(num != 0) {
        digit = num % 10;
        sum += digit;
        num /= 10;
    }
    
    // Output sum
    printf("Sum of the digits of the number is: %d\n", sum);
    
    return 0;
}
