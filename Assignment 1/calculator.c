//Made by Shardul Funde

#include <stdio.h>

int main(void) {
    //welcome message
    printf("Welcome to C lang calculator.");
    printf("\nThis programme does simple calculations for you.\n");

    //taking input
    printf("Type\n( + ) for addition.\n( - ) for subtraction.\n( * ) for Multiplication.\n( / ) for Division.\n");
    //declaring a char variable
    char input;
    printf("Please type your operation here : ");
    scanf("%c", &input);

    //Taking X and Y
    printf("\nNow taking X and Y,remember that operation will be performed as follows\n(X + Y), (X - Y), (X * Y), (X / Y)");
    //Declaring X and Y and taking them as input
    float x, y;
    
    printf("\nType X:");
    scanf("%f", &x);
    
    printf("Type Y:");
    scanf("%f", &y);

    //declaring answers
    float sum, subtraction, multiplication, division;
    //declaring the answers in if, else if ladder for performance
    if(input == '+'){
        sum = x + y;
        printf("Your answer is %0.2f", sum);
    }
    
    else if(input == '-'){
        subtraction = x - y;
        printf("Your answer is %0.2f", subtraction);        
    }
    
    else if(input == '*'){
        multiplication = x * y;
        printf("Your answer is %0.2f", multiplication); 
    }
    
    else if(input == '/'){
        multiplication = x / y;
        printf("Your answer is %0.2f", division); 
    }

    else{
        printf("Please enter a valid input.");
    }
    return 0; 
}
