// for who get 16 and heir the get exellent
// for who get from 14 to 16 are very good
// for who get from 10 to 14 they are good
// for who get less than 10 they fail
#include <stdio.h>

int main(void){
    
    int grade;
   
    printf("enter grade:");
    scanf("%d" ,& grade);

if ( grade >= 16)
{
   printf("grade: %d\n",grade);
   printf("Exellent \n");
} 
else if (grade >=14 )
{
   printf("grade:%d\n",grade); 
   printf("very good\n");
}
else if (grade >=10 )
{
   printf("grade :%d\n",grade); 
   printf(" good\n");
}
else
{
   printf("grade:%d\n",grade); 
   printf("fail\n");
}
 return 0;
}
