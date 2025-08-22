#include <stdio.h>
int main() {
    float L, B, area, peri;
    printf("Enter length and breadth: " );
    scanf("%f %f", &L, &B);
    area = L * B;
    peri = 2 * (L + B);
    printf("Area = %.2f, Perimeter = %.2f\n", area, peri);
    return 0;
}
