/*You want to apply a discount based on the amount to a sum of money (relating to the purchase of a product).
inserted following the following scheme:
        from 0 to 500 10% discount;
        from 501 to 1000 20% discount;
        over 1001 30% discount;
 The program, after having calculated and displayed the discount and the net price on the video, must allow you to re-enter
 Further sums of money.*/

 #include <stdio.h>

int main() {
    //I declare the variables
    double price=0;
    double total=0;
    int percent=0;
    int repeat=1;

    //I repeat the operation so that the user has to enter more values
    do {
        printf("Enter the price of a product:\n"),
        scanf("%lf", &price);

        //I check which value you entered and calculate the net price with percentages
        if(price>0 && price<=500) {
        percent=10;
       	price= price*percent/100;
        }
        if(price>=501 && price<=1000) {
        percentuale=20;
        price= price*percent/100;
        }
        if(prezzo>=1001) {
        percentuale=30;
        price= price*percent/100;
        }

        //If you insert multiple values, I save all the values ??inserted in a valid variable
        total= total + price;

        printf("RECEIPT\n");
        printf("Discount: %d\n", percent);
        printf("Net price: %.2lf\n", total);
        printf("Do you want to enter more price?: (Yes=1 | No=0)");
        scanf("%d", &repeat);

    } while(repeat==1);

    return 0;
 }
