#include <stdio.h>

int main() {
           float  num1=0;
           float num2=0;
           char op=0;
           float ans=0;
       printf("Enter number 1\n");
       scanf(" %f", &num1);
       printf("Enter operator\n");
       scanf(" %c", &op);
       printf("Enter number 2\n");
       scanf(" %f", &num2);
        
    if(op== '+')
           {
          ans =  num1 + num2;
           }
       if(op=='-')
             {
              ans= num1 - num2;
             }
       
      if(op=='*')
              {
            ans= num1 * num2;
              }
       if(op=='/')
              {
              ans= num1/num2;
              }
       
      printf("%f", ans);
    
    return 0;
}
