include <stdio.h>
#include <math.h>
int main() {
         float base=0;
         float perp=0;
         float hypsq=0;
         printf("Enter base length\n");
         scanf("%f", &base);
         printf("Enter perpendicular length\n");
         scanf("%f", &perp);
         hypsq=base*base + perp*perp;
         printf("The hypotenuse is\n");
       printf("%f", sqrt(hypsq));
       return 1;
}
