\\172.16.5.41\Exam Submission\Arwa Feroze
/*
 * Programmer: Arwa Feroze
 * Date: 11/9/23
 * Description: solve quadratic equations
 * Related files:
 */
  //--Include Files--//
 //--Global Varriables--//
#include <stdio.h>
#include<math.h>
int main() {
        float a=0;
        float b=0;
        float c=0;
        float temp=0;
        float temp2=0;
        float x1=0;
        float x2=0;
        int repeater=-1;
        while (repeater<0){
        printf("Enter coefficient of x square (a) \n");
        scanf("%f", &a);
        printf("Enter coefficient of x (b) \n");
        scanf("%f", &b);
        printf("Enter constant (c) \n");
        scanf("%f", &c);
        temp=b*b-4*a*c;
        temp2=-b+sqrt(temp);
        x1=temp2/(2*a);
        temp2=-b-sqrt(temp);
        x2=temp2/(2*a);
        printf("%f", x1);
        printf(", ");
        printf("%f\n", x2);
        }
}
