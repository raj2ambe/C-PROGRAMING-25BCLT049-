#include <stdio.h>
int main() {
    int minutes;
    float hours;
    printf("Enter minutes: " );
    scanf("%d", &minutes);
    hours = (float)minutes / 60;
    printf("Hours = %.2f\n", hours);
    return 0;
}
