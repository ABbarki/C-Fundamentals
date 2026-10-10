#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    int choice;
    printf("=========================\n");
    printf("      C CYBER TOOLKIT    \n");
    printf("=========================\n\n");
    printf("1. System Information\n");
    printf("2. Number Analyzer\n");
    printf("3. Password Strength Demo\n");
    printf("4. Calculator\n");
    printf("5. Exit\n\n");
    printf("Choose: ");
    scanf("%d", &choice);

    // Variables for choices 1 & 2
    char name[50];
    int age;
    char fav[50];
    int number;

    if (choice == 1)
    {
        printf("What is your name: ");
        scanf("%s", name);

        printf("What is your age: ");
        scanf("%d", &age);

        printf("What is your Favorite OS: ");
        scanf("%s", fav);

        printf("\n--- System Information ---\n");
        printf("Name: %s\n", name);
        printf("Age: %d\n", age);
        printf("Favorite OS: %s\n", fav);
    }
    else if (choice == 2)
    {
        printf("Enter number: ");
        scanf("%d", &number);

        // 1. Even/Odd Check
        if (number % 2 == 0)
        {
            printf("Even: YES\n");
        }
        else
        {
            printf("Even: NO\n");
        }

        // 2. Positive Check
        if (number > 0)
        {
            printf("Positive: YES\n");
        }
        else
        {
            printf("Positive: NO\n");
        }

        // 3. Digits Count (using a for loop)
        int temp = number;
        if (temp < 0) {
            temp = -temp; // Handle negative numbers
        }

        int digits = 0;
        if (temp == 0) {
            digits = 1; // Special case for 0
        } else {
            for (; temp > 0; temp /= 10) {
                digits++;
            }
        }

        printf("Digits: %d\n", digits);
    }
    else if (choice == 3)
    {
        char password[100];
        int length = 0;
        int hasUpper = 0, hasLower = 0, hasDigit = 0, hasSpecial = 0;

        printf("Enter password: ");
        scanf("%s", password);
        
        length = strlen(password);

        // Loop through each character to check its type
        for (int i = 0; i < length; i++) {
            if (isupper(password[i])) {
                hasUpper = 1;
            } else if (islower(password[i])) {
                hasLower = 1;
            } else if (isdigit(password[i])) {
                hasDigit = 1;
            } else if (ispunct(password[i])) {
                hasSpecial = 1;
            }
        }

        // Count how many criteria categories were met
        int score = hasUpper + hasLower + hasDigit + hasSpecial;

        printf("\n--- Password Analysis ---\n");
        printf("Length: %d\n", length);

        if (length < 8) {
            printf("Strength: Weak (Too short. Must be at least 8 characters.)\n");
        } else if (score == 4) {
            printf("Strength: Strong\n");
        } else if (score >= 2) {
            printf("Strength: Moderate\n");
        } else {
            printf("Strength: Weak\n");
        }
    }
    else if (choice == 4){
        int num1, num2;
        char oprerator;
        printf("Enter first number: ");
        scanf("%d", &num1);
        printf("Enter second number: ");
        scanf("%d", &num2);
        printf("Enter operator (+, -, *, /): ");
        scanf(" %c", &oprerator);  
        if (oprerator == '+'){
            printf("Result: %d\n", num1 + num2);
        }
        else if (oprerator == '-'){
            printf("Result: %d\n", num1 - num2);
        }
        else if (oprerator == '*'){
            printf("Result: %d\n", num1 * num2);
        }
        else if (oprerator == '/'){
            if (num2 != 0){
                printf("Result: %.2f\n", (float)num1 / num2);
            }
            else{
                printf("Error: Division by zero is not allowed.\n");
            }
        }
        else{
            printf("Invalid operator.\n");
        }
    }
    else if (choice == 5)
    {
        printf("Exiting toolkit...\n");
    }
    else
    {
        printf("Invalid choice or option not implemented yet.\n");
    }

    return 0;
}