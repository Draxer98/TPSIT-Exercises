/*After reading N numbers (integers), with N chosen by the user and not exceeding 30 elements,
calculate the sum and average of even numbers and odd numbers (use %).*/

#include <stdio.h>

int main() {
    // Declare variables
    int num = 0;
    int number = 0;
    int sumEven = 0;
    int sumOdd = 0;
    float averageEven = 0;
    float averageOdd = 0;
    float remainder = 0;

    // Ask to enter the desired number of elements
    do {
        printf("Enter how many numbers you want to input (must be between 1 and 29): ");
        scanf("%d", &num);

        // Check if the number is valid
        if (num <= 0 || num >= 30) {
            printf("Invalid number, please try again.\n");
        }
    } while (num <= 0 || num >= 30);

    int remainingNum = num;

    while (remainingNum > 0) {
        printf("Enter a number: ");
        scanf("%d", &number);

        remainingNum--;

        remainder = number % 2;

        if (remainder == 0) {
            sumEven = sumEven + number;
        } else {
            sumOdd = sumOdd + number;
        }
    }
    
    averageEven = sumEven / num;
    averageOdd = sumOdd / num;
    
    // Output sums and averages
    printf("Sum of even numbers is: %d\n", sumEven);
    printf("Sum of odd numbers is: %d\n", sumOdd);
    printf("Average of even numbers is: %.2f\n", averageEven);
    printf("Average of odd numbers is: %.2f\n", averageOdd);

    return 0;
}
