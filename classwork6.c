
#include <stdio.h>

int main() {
    float marks1, marks2, marks3, totalmarks, average;


    printf("Enter marks for subject 1: ");
    scanf("%f", &marks1);
    printf("Enter marks for subject 2: ");
    scanf("%f", &marks2);
    printf("Enter marks for subject 3: ");
    scanf("%f", &marks3);

    totalmarks = marks1 + marks2 + marks3;
    average = totalmarks / 3;

  
    printf("Total marks: %f\n", totalmarks);

  
    if (average < 50) {
        printf("Result: Fail\n");
    } else if (average > 75) {
        printf("Result: Pass with Grade A\n");
    } else {
        printf("Result: Pass with Grade B\n");
    }

    return 0;
}
