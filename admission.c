#include <stdio.h>

int main() {
    float total, phy, chem, maths;
    float average;

    // Input marks
    printf("Enter your Maths marks: ");
    scanf("%f", &maths);
    printf("Enter your Physics marks: ");
    scanf("%f", &phy);
    printf("Enter your Chemistry marks: ");
    scanf("%f", &chem);

    // Display individual marks
    printf("\nYour maths marks: %.2f\n", maths);
    printf("Your physics marks: %.2f\n", phy);
    printf("Your chemistry marks: %.2f\n", chem);

    printf("-------------------------------------------\n");

    // Calculations
    total = phy + chem + maths;
    printf("PCM Total = \t%.2f/300\n", total);

    // Average
    average = total / 3;
    printf("Average   = \t%.2f%%\n", average);

    printf("-------------------------------------------\n");

    // Eligibility Status
    printf("\nStatus:\t\t%s\n", (average >= 50) ? "Eligible for Admission" : "NOT ELIGIBLE FOR ADMISSION \n");
    printf("\n-------------------------------------------\n\n");

    return 0;
}
