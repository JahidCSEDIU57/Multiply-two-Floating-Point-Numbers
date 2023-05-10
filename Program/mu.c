#include <stdio.h>
int main() {
    float a, b;
    printf("What is the firat number: ");
    scanf("%f", &a);
    printf("What is the second number:");
    scanf("%f", &b);
    printf("Product of the a and b is = %.2lf\n", a*b);

    return 0;
}
