#include <stdio.h>

int main() {
    int choice;
    float m1, m2, m3, total, avg;
    char continue_choice;

    // Label using goto to create a menu loop
    main_menu:
    printf("\n===================================\n");
    printf(" STUDENT GRADE & RESULT MANAGEMENT \n");
    printf("===================================\n");
    printf("1. Calculate Total and Average Marks\n");
    printf("2. Determine Student Grade\n");
    printf("3. Check Pass/Fail Result Status\n");
    printf("4. Exit Program\n");
    printf("-----------------------------------\n");
    printf("Enter your choice (1 to 4) : ");
    scanf("%d", &choice);

    if (choice != 1 && choice != 2 && choice != 3 && choice != 4) {
        printf("Invalid input! Please enter a valid integer.\n");
    }

    switch (choice) {
        case 1:
            printf("\n--- Total & Average Calculation ---\n");
            printf("Enter marks for 3 subjects (out of 100): ");
            scanf("%f %f %f", &m1, &m2, &m3);
            if (m1 < 0 || m1 > 100 || m2 < 0 || m2 > 100 || m3 < 0 || m3 > 100) {
                printf("Error: Marks must be between 0 and 100.\n");
            } else {
                total = m1 + m2 + m3;
                avg = total / 3.0;
                printf("Total Marks: %.2f / 300\n", total);
                printf("Average Percentage: %.2f%%\n", avg);
            }
            break;

        case 2:
            printf("\n--- Grade Determination ---\n");
            printf("Enter average percentage: ");
            scanf("%f", &avg);
            if (avg < 0 || avg > 100) {
                printf("Invalid percentage entered.\n");
            } else if (avg >= 85) {
                printf("Grade: O (Outstanding)\n");
            } else if (avg >= 75) {
                printf("Grade: A+ (Excellent)\n");
            } else if (avg >= 65) {
                printf("Grade: A (Very Good)\n");
            } else if (avg >= 55) {
                printf("Grade: B+ (Good)\n");
            } else if (avg >= 50) {
                printf("Grade: B (Above Average)\n");
            } else if (avg >= 40) {
                printf("Grade: C (Pass)\n");
            } else {
                printf("Grade: F (Fail)\n");
            }
            break;

        case 3:
            printf("\n--- Pass/Fail Result Status ---\n");
            printf("Enter marks for 3 subjects: ");
            scanf("%f %f %f", &m1, &m2, &m3);
            if (m1 < 40 || m2 < 40 || m3 < 40) {
                printf("Result: FAIL (Scored below passing mark 40 in one or more subjects)\n");
            } else {
                printf("Result: PASS\n");
            }
            break;

        case 4:
            printf("\nExiting the system. Thank you!\n");
            goto exit_program;

        default:
            printf("\nInvalid Choice! Please select an option between 1 and 4.\n");
    }

    printf("\nDo you want to perform another operation? (y/n): ");
    scanf(" %c", &continue_choice);

    if (continue_choice == 'y' || continue_choice == 'Y') {
        goto main_menu; // Jump back to the main menu using goto
    }

    exit_program:
    return 0;
}
