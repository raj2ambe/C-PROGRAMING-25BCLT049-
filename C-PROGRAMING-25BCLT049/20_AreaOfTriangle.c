#include <stdio.h>
int main() {
    float H, L, area;
    printf("Enter height and base: " );
    scanf("%f %f", &H, &L);
    area = (H * L) / 2;
    printf("Area = %.2f\n", area);
    return 0;
}
