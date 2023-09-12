\\172.16.5.41\Exam Submission\Arwa Feroze
/*
 * Programmer: Arwa Feroze
 * Date: 11/9/23
 * Description: Print n stars in n lines by taking input n.
 * Related files:
 */
  //--Include Files--//
 //--Global Varriables--//
#include<stdio.h>
main() {
         int i=0;
         int j=0;
         int n=0;
         printf("Enter a positive whole number\n");
         scanf("%d", &n);
         while (i<n) {
            j=n;
             while (j>0) {
                   printf("*");
                  j=j-1; 
                 }
             printf("\n");
             i=i+1;
             }
  
        }
