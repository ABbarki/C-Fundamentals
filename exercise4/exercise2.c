//Celsius → Fahrenheit converter
// the formulas say that : °C = (°F - 32) *5/9
// so we need to float because the degree isnt going to take a whole number
# include <stdio.h>

 int main(void){

    float c;
    float f;

    printf("Fahrenheit :");
    scanf("%f", &f); 

    c=(f-32) *(5.0/9.0);
    printf("%f\n", c);
    
    return 0;


}