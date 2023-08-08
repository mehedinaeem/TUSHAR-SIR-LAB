#include <stdio.h>

void printNumbers(int n) {
    if (n <= 5) {
        printf("%d ", n);
        printNumbers(n + 1); // Recursive call with incremented value
        printf("%d ", n);
    }
}

int main() {
    printNumbers(1); // Start recursion from 1
    return 0;
}
