//Ask the user to enter five numbers, calculate their sum, and print their average.

# include <stdio.h>

int main(void){
    int numbers[5];
    int sum;

    for(int i=0;i<5;i++){
        printf("enter a number:");
        scanf("%d", &numbers[i]);
         sum +=numbers[i];
    }

   
    printf("the sum is:%d\n", sum);
    return 0;
    


}