/*
 * Programmer: Arwa Feroze
 * Date: 25/9/23
 * Description: Calculate and print the original cost of a shopping spree, the discount, and the saved amount.
 * Related files:
 */
  //--Include Files--//
 //--Global Varriables--//
#include <stdio.h>
int main() {
    float cost;
    float discount = 0.0;
    printf("Enter the total cost: ");
    scanf("%f", &cost);
    if (cost > = 2000 && cost <= 4000) {
        discount = 0.20; 
    } else if (cost > 4000 && cost <= 6000) {
        discount = 0.30; 
    } else if (cost > 6000) {
        discount = 0.50;
    }// end if
    float savedAmount = cost * discount;
    float amountAfterDiscount = cost - savedAmount;
    printf("Actual Amount: %.2f\n", cost);
    printf("Saved Amount: %.2f\n", savedAmount);
    printf("Amount After Discount: %.2f\n", amountAfterDiscount);
    return 0;
}// end main
