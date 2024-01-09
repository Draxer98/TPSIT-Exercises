/*A bank wants to know some information about its shares held in its portfolio.
Write the program in C after having entered the denomination of the stock and its price from the keyboard
determine and display in Output:
1) The sum of share prices;
2) The average of share prices;
3) The stock with the maximum price;
4) The stock with the minimum price
5) The average of share prices with an amount between 2.50 and 3.50 euros, extremes included.
The entry ends with the word “finished”.
The program must allow the price to be reinserted if it is zero or lower.*/

#include <stdio.h>

void main() {
    // Declare variables
    float price = 0;
    double totalPrice = 0;
    float maxPrice = 0;
    float minPrice = 0;
    float average = 0;
    double totalInRange = 0;
    float averageInRange = 0;
    int counter = 0;
    int counterInRange = 0;
    char choice;
    int actionChoice = 0;

    // Enter the desired action
    printf("Select the desired action: ");
    scanf("%d", &actionChoice);

    do {
        do {
            // Ask to enter a price greater than 0
            printf("Enter a price: ");
            scanf("%f", &price);
        } while (price <= 0);

        // Add the price
        totalPrice = totalPrice + price;
        // Counter is used to calculate the average later
        counter++;

        if (price > maxPrice) {
            maxPrice = price;
        }

        if (counter == 1) {
            minPrice = price;
        }

        if (price <= minPrice) {
            minPrice = price;
        }

        if (price >= 2.50 && price <= 3.50) {
            totalInRange = totalInRange + price;
            counterInRange++;
        }

        // Choice to continue or stop
        printf("Do you want to finish?: | yes=1  no=0 |");
        scanf("%d", &choice);

    } while (choice != 1);

    // Calculations for the average
    average = totalPrice / counter;
    averageInRange = totalInRange / counterInRange;

    // Output
    printf("Sum of stock prices: %.2f \n", totalPrice);
    printf("Average stock price: %.2f \n", average);
    printf("Stock with the maximum price: %.2f \n", maxPrice);
    printf("Stock with the minimum price: %.2f \n", minPrice);
    printf("Average prices between 2.50 and 3.50: %.2f \n", averageInRange);
}
