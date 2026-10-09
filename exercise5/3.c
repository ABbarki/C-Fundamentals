
#include <stdio.h>
 
int main(void){
    int number1; 
    int number2;

    printf("enter a number 1:");
    scanf("%d", &number1);

    printf("enter a number 2:");
    scanf("%d", &number2);

    if (number1 > number2)
    {
        printf("number  %d is bigger than %d.\n" , number1, number2);
    }
    else{
        printf("number %d is smaller than %d.\n", number1 , number2);
    }
    return 0;
}