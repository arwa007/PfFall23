/*
 * Programmer: Arwa Feroze
 * Date: 25/9/23
 * Description: Input light sensor values and output the current conditions based on it.
 * Related files:
 */
  //--Include Files--//
 //--Global Varriables--//
#include <stdio.h>

int main() {
    int lightSensorValue;
    printf("Enter the light sensor value (0-1000): ");
    scanf("%d", &lightSensorValue);
    if (lightSensorValue > 500) {
        printf("The sensor is exposed to sunshine.\n");
    } else if (lightSensorValue >= 100 && lightSensorValue <= 500) {
        printf("The sensor is in a well-lit condition.\n");
    } else if (lightSensorValue >= 0 && lightSensorValue < 100) {
        printf("The sensor is in the evening condition.\n");
    } else {
        printf("Invalid sensor value. Please enter a value between 0 and 1000.\n");
    }

    return 0;
}
