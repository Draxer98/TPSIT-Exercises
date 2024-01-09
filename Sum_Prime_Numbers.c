/*Given a positive integer N, print the sum of the first N numbers
alternating firsts (one yes and one no)*/

#include <stdio.h>

int main() {
	//I declare the variables
    int number = 0;
    int two = 2;
    int boolean;
    int sum = 0;
    
    //I ask you to enter an integer and positive number if possible
    printf("Enter a number: ");
    scanf("%d", &number);

    for (int i = 1; i < number; i++) {

        if (i > 1) {
            
            boolean = 1;
            
            // The loop is useful if it is actually a prime number
            for (int j = 2; j <= i / 2 && j != i; j++) {
                
                if (i % j == 0) {
                    boolean = 0;
                }
            }
            
            // if the number is prime and the counter is even then sum
            if (boolean && two % 2 == 0) sum += i;
            
            // if the number "i" is prime then we add +1 to the counter
            if (boolean == 1) two++;
        }

    }
    printf("\nResult: %d", sum);
}
