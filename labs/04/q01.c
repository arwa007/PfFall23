#include<stdio.h>
main() {
         int i=0;
         int j=0;
         int n=0;
         printf("Enter a positive whole number\n");
         scanf("%d", &n);
         while (i<=n) {
            j=i; 
            i=i+1;
             while (j>0) {
                   printf("*");
                   j=j-1;
                 }
             printf("\n");
             }
  
        }