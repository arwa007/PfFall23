#include <stdio.h>
int main() {
            int south1=10;
            int west=10;
            int south2=5;
            int north=15;
            int total_dist=0;
            int fuel_used=0;
            total_dist= south1+west+south2+north;
            fuel_used= total_dist*2;
            printf("Total fuel used is  ");
            printf("%d", fuel_used);
return 1;
}
      
