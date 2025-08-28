#include <stdio.h>
int main() {
    float dollars, pounds;
    printf("Enter amount of dollars-->" );
    scanf("%f", &dollars);
    pounds = (dollars * 84) / 110;
    printf("Pounds = %.2f\n", pounds);
    return 0;
}
