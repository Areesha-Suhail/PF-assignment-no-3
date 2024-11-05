
#include <stdio.h>

int main() {
    float monthly_income;
    int existing_loan;
    int overduePayments;

    printf("Enter your monthly income: ");
    scanf("%f", &monthly_income);

    if (monthly_income > 30000) {
      
        printf("Do you have an existing loan? (1 for YES, 0 for NO): ");
        scanf("%d", &existing_loan);

        if (existing_loan == 1) {
         
            printf("Do you have any overdue payments? (1 for YES, 0 for NO): ");
            scanf("%d", &overduePayments);

            if (overduePayments == 1) {
                printf("You are ineligible for the loan due to overdue payments.\n");
            } else {
                printf("You may qualify for the loan.\n");
            }
        } else {
            printf("You may qualify for the loan.\n");
        }
    } else {
        printf("You are ineligible for the loan due to insufficient income.\n");
    }

    return 0;
}
