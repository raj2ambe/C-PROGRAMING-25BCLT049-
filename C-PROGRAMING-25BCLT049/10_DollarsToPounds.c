#include <stdio.h>
int main() {
    float dollars, pounds;
    printf("Enter amount in dollars: " );
    scanf("%f", &dollars);
    pounds = (dollars * 48) / 70;
    printf("Pounds = %.2f\n", pounds);
    return 0;
}
