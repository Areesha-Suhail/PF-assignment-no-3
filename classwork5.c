
#include <stdio.h>

int main() {
    float accountBalance, withdrawalAmount;
    int specialPermit; 

  
    printf("Enter your account balance: ");
    scanf("%f", &accountBalance);
    printf("Enter the withdrawal amount: ");
    scanf("%f", &withdrawalAmount);

  
    if (withdrawalAmount > accountBalance) {
        printf("Insufficient balance for the withdrawal.\n");
    } else {
      
        if (withdrawalAmount > 10000) {
            printf("Do you have a special withdrawal permit? (1 for Yes, 0 for No): ");
            scanf("%d", &specialPermit);

            if (specialPermit == 1) {
                printf("Withdrawal approved. You can withdraw %f\n", withdrawalAmount);
            } else {
                printf("Withdrawal denied. A special withdrawal permit is required for amounts over 10,000.\n");
            }
        } else {
            printf("Withdrawal approved. You can withdraw %f\n", withdrawalAmount);
        }
    }

    return 0;
}
