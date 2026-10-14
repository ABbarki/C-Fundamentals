//Create an array containing five integers and find the largest number.

#include <stdio.h>

int main(void){
    int numbers[5]={10,20,30,40,50};
    int max = numbers[0];
    for(int i=0; i<5 ;i++){
        if (numbers[i]> max){
            max =numbers[i];
        }
    }
    printf("the max value is: %d\n", max);
    return 0;
}