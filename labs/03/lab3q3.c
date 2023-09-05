#include <stdio.h>
#include <math.h>
int main() {
         int base=0;
         int perp=0;
         float hypsq=0;
         printf("Enter base length\n");
         scanf("%d", &base);
         printf("Enter perpendicular length\n");
         scanf("%d", &perp);
         hypsq=base*base + perp*perp;
         printf("The hypotenuse is\n");
       printf("%f", sqrt(hypsq));
       return 1;
}
          