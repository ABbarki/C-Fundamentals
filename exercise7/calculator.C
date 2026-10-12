//calculatore use function
#include <stdio.h>

int num1,num2;
char o;
void plus(){
    printf("%d\n",num1+num2);
}
void minus(){
    printf("%d\n",num1-num2);
}
void mltuple(){
    printf("%d\n",num1*num2);
}
void dveid (){
    if (num2 != 0) {
        printf("%d\n", num1 / num2);
    } else {
        printf("Error: Division by zero\n");
    }
}

int main (void){
    printf("Enter a number:");
    scanf("%d", &num1);

     printf("Enter a number:");
    scanf("%d",&num2);

     printf("Enter a operation:");
     scanf(" %c",&o);
    if(o == '+'){
        plus();}
        else if (o =='-'){
            minus();
        }
        else if (o == '*'){
            mltuple();
        }
        else if (o == '/')
        { dveid();}
        else {
            printf("invalid operation\n");
        }
    return 0;


}
