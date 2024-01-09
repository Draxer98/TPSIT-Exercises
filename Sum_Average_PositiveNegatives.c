/*Write a program in C that,
after reading N numbers (n chosen by the user) you calculate and display the sum of the positive numbers on the screen,
the sum of negative numbers in absolute value, the counting of negative and positive numbers,
the average of positive and negative numbers.*/

#include <stdio.h>

int main() {
    // Declare variables
    int choice = 0;
    int reserveChoice = 0;
    int number = 0;
    int sumPositives = 0;
    int sumNegatives = 0;
    int positiveCounter = 0;
    int negativeCounter = 0;
    double averagePositives = 0;
    double averageNegatives = 0;
    
    // Ask for the number of inputs
    printf("How many numbers do you want to enter?:\n");
    scanf("%d", &choice);

    reserveChoice = choice;
    
    // The loop is used in case more values need to be added at the end
    while (reserveChoice > 0) {
        printf("Enter a positive or negative number: ");
        scanf("%d", &number);
        
        // Check if the number is positive or zero, otherwise, it is considered negative
        if (number >= 0) {
            sumPositives = sumPositives + number;
            positiveCounter++;
        } else {
            number = number * (-1);
            sumNegatives = sumNegatives + number;
            negativeCounter++;
        }
        reserveChoice--;
    }
    
    // Calculate averages
    averagePositives = sumPositives / choice;
    averageNegatives = sumNegatives / choice;
    
    // Print sum, numbers entered, and averages
    // Positive Numbers
    printf("POSITIVE NUMBERS\n");
    printf("Sum of positive numbers: %d\n", sumPositives);
    printf("Positive numbers entered: %d\n", positiveCounter);
    printf("Average of positive numbers: %.2lf\n\n", averagePositives);
    
    // Negative Numbers
    printf("NEGATIVE NUMBERS\n");
    printf("Sum of negative numbers: %d\n", sumNegatives);
    printf("Negative numbers entered: %d\n", negativeCounter);
    printf("Average of negative numbers: %.2lf\n", averageNegatives);
    
    return 0;
}
