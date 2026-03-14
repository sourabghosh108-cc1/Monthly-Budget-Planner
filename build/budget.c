#include <stdio.h>
#include <stdlib.h>

int main() {
    float income;

    printf("Enter monthly income: ");
    scanf("%f", &income);

    float rent, utilities;

    printf("Enter rent expense: ");
    scanf("%f", &rent);

    printf("Enter utilities expense: ");
    scanf("%f", &utilities);

    float fixed_total = rent + utilities;

    float variable_total = 0;
    int num;

    printf("Number of variable expenses: ");
    scanf("%d", &num);

    for (int i = 0; i < num; i++) {
        float expense;
        printf("Enter variable expense: ");
        scanf("%f", &expense);
        variable_total += expense;
    }

    float total_expenses = fixed_total + variable_total;
    float remaining = income - total_expenses;

    if (remaining > 0) {
        printf("Remaining budget: %.2f\n", remaining);
    } else {
        printf("You exceeded your budget by %.2f\n", abs((int)remaining));
    }

    return 0;
}
