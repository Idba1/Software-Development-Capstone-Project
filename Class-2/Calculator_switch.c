#include <stdio.h>

int main() {
   
    char operator; 
    double num1, num2;
    printf("Enter any Operator (+, -,*, /):\n");
    scanf("%c", &operator);
    
     printf("Enter two number \n");
    scanf("%lf %lf", &num1, &num2);
    
    switch(operator){
        case '+' :
        printf("your result is %.2lf+%.2lf = %.2lf", num1, num2, num1+num2 );
        break;
        
         case '-' :
        printf("your result is %.2lf-%.2lf = %.2lf", num1, num2, num1-num2 );
        break;
        
         case '*' :
        printf("your result is %.2lf*%.2lf = %.2lf", num1, num2, num1*num2 );
        break;
        
         case '/' :
        printf("your result is %.2lf/%.2lf = %.2lf", num1, num2, num1/num2 );
        break;
        
        default:
        printf("Please enter an correct operator");
    }

    return 0;
}