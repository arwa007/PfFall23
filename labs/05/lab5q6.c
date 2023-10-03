/*
 * Programmer: Arwa Feroze
 * Date: 25/9/23
 * Description: Take decimal number (0-255) as input and check if the 4th and 7 bits are on. If yes, turn them off.
 * Related files:
 */
  //--Include Files--//
 //--Global Varriables--//
#include <stdio.h>
int main() {
    unsigned char num;
    printf("Enter an 8-bit number (0-255): ");
    scanf("%hhu", &num);
    if ((num & (1 << 3)) && (num & (1 << 6))) {
        num &= ~(1 << 3); // Turn off the 4th bit
        num &= ~(1 << 6); // Turn off the 7th bit
        printf("The 4th and 7th bits were turned off. Result: %hhu\n", num);
    } else {
        printf("The 4th and 7th bits are not both on. No changes were made. Result: %hhu\n", num);
    }// end if

    return 0;
}// end main
