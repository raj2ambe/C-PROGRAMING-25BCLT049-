#include <stdio.h>
int main() {
    float L, area, peri;
    printf("Enter length of side: " );
    scanf("%f", &L);
    area = L * L;
    peri = 4 * L;
    printf("Area = %.2f, Perimeter = %.2f\n", area, peri);
    return 0;
}
