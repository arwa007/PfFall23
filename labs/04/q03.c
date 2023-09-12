#include<stdio.h>
main() {
       int n=0;
       int num=0;
       int ans=0;
       int i=0;
       printf("Enter a positive whole number \n");
       scanf("%d", &n);
       while (i<n){
              printf("Enter a positive whole number \n");
              scanf("%d", &num);
              num=num*num;
              ans=ans+num;
              i=i+1;
       }
       printf("%d", ans);
       }