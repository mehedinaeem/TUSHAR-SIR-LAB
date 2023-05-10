#include <stdio.h>

int main() {
    int n, count = 0, num = 2;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    while (count < n) {
        int is_prime = 1;
        for (int i = 2; i < num; i++) {
            if (num % i == 0) {
                is_prime = 0;
                break;
            }
        }
        if (is_prime) {
            printf("%d ", num);
            count++;
        }
        num++;
    }
    return 0;
}
