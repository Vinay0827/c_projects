#include <stdio.h>
#include <stdint.h>
#include <math.h>

int main() {
    int a, b, c;
    int div;
    double root1, root2;

    printf("Enter the coefficients of the quadratic equation: \n");
    scanf("%d %d %d", &a, &b, &c);

    div = b * b - 4 * a * c;

    if (div == 0) {
        printf("The equation has equal roots.\n");
        root1 = root2 = -b / (2.0 * a);
        printf("Root 1 = Root 2 = %.2lf\n", root1);
    } else if (div < 0) {
        printf("The roots are imaginary.\n");
    } else {
        printf("The roots are real and distinct.\n");
        root1 = (-b + sqrt(div)) / (2.0 * a);
        root2 = (-b - sqrt(div)) / (2.0 * a);
        printf("Root 1 = %.2lf\n", root1);
        printf("Root 2 = %.2lf\n", root2);
    }

    return 0;
}
