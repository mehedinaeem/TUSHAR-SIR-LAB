#include <stdio.h>
#include <math.h>

int main() {
    int p, n;
    double r;

    printf("Enter principle Amount: ");
    scanf("%d", &p);

    printf("Annual rate: ");
    scanf("%lf", &r);

    printf("Enter Year: ");
    scanf("%d", &n);

    double v = p * pow((1 + (r / 100)), n);

    printf("Future investment value: %.2lf", v);
    return 0;
}
