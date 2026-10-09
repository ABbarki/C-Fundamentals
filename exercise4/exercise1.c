// age calculator 
//for the age youneed a input from user to now the year he born 
// and this year so you need three int one for this year and the other for birth year and the last one to store age 
#include <stdio.h>

  int main(void){

    int birth;
    int this_year;
    int age;

    printf("What year is this :");
    scanf("%d",&this_year);

    printf("What year were you born in :");
    scanf("%d",&birth);

    age= this_year -birth ;
    printf("you are %d years old\n",age);
    
     return 0;
  }