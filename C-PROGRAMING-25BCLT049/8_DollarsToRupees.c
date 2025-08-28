#include <stdio.h>
int main() {
    float dollars, rupees;
    printf("Enter amount in dollars: " );
    scanf("%f", &dollars);
    rupees = dollars * 84;
    printf("Rupees = %.2f\n", rupees);
    return 0;
}
