#include <stdio.h>
int main() {
    float gross, net;
    printf("Enter gross sales: " );
    scanf("%f", &gross);
    net = gross - (0.10 * gross);
    printf("Net sales = %.2f\n", net);
    return 0;
}
