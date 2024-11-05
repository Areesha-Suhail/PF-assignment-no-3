
#include <stdio.h>

int main() {
    int age;
    int had_serious_illness;

    
    printf("Enter your age: ");
    scanf("%d", &age);

   
    if (age < 18) {
        printf("Not eligible for health insurance. Must be above 18 years old.\n");
    } else if (age > 45) {
      
        printf("Have you had any serious illness? (1 for Yes, 0 for No): ");
        scanf("%d", &had_serious_illness);

        if (had_serious_illness == 1) {
            printf("Not eligible for health insurance due to serious illness.\n");
        } else {
            printf("Eligible for health insurance.\n");
        }
    } else {
        
        printf("Eligible for health insurance.\n");
    }

    return 0;
}

