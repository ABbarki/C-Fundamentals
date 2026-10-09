// postive number are number that bigger than 0
 
#include <stdio.h>
 
int main(void){
    int number; 

    printf("enter a number:");
    scanf("%d", &number);

    if (number > 0)
    {
        printf("%d is postive.\n" , number);
    }
    else{
        printf("%d is negative.\n", number);
    }
    return 0;
}