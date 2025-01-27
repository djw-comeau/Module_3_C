// Student Name: David Comeau
// Course: PROG2007 - Introduction to C
// Assignment: Exercise 3
// Instructor: Nadia Gouda
// Date: January 27, 2025
// Sources Used
// https://www.geeksforgeeks.org/c-float-and-double/
// https://www.geeksforgeeks.org/arithmetic-operators-in-c/
// https://www.geeksforgeeks.org/basic-input-and-output-in-c/
// https://www.geeksforgeeks.org/what-is-a-character-char/
// https://www.javatpoint.com/pre-increment-and-post-increment-operator-in-c

/*
Purpose of the Program:
This program was created to show basic concepts of programming in C.
 - Floating Point and Integer Variables
 - Arithmetic Operators
 - Modulus Operators
 - Character Variables
 - User Input
 - Increment Operators

My code has been laid out in sequence of Exercise 3:
https://nscconline.brightspace.com/d2l/le/content/333749/viewContent/5340675/View

Each section of code has a comment header stating which section it is and what it's doing.
*/

#include <stdio.h>

int main()

{

    // Floating-Point Values
    /* 
    This section declares two float variables, initializes them with values,
    and then prints those values to two decimal places.
    */

    float NumberOne = 7.62;
    float NumberTwo = 42.00;
    printf("Floating Point Values!\n");
    printf("Float One: %.2f\n", NumberOne);
    printf("Float Two: %.2f\n", NumberTwo);
    printf("\n");

    // Arithmetic Operators
    /*
    This section shows the arithmetic operations of sum, difference,
    multiplication, and division on two float variables, then outputs those results.     
    */

    float sumOutput = NumberOne + NumberTwo;
    float differenceOutput = NumberOne - NumberTwo;
    float productOutput = NumberOne * NumberTwo;
    float divisionOutput = NumberOne / NumberTwo;
    printf("Quick Maths!\n");
    printf("Sum Output: %.2f\n", sumOutput);
    printf("Difference Output: %.2f\n", differenceOutput);
    printf("Product Output: %.2f\n", productOutput);
    printf("Division Output: %.2f\n", divisionOutput);
    printf("\n");

    // Modulus Operator
    /*
    Here, we declare two integer variables, calculate the modulus of one by the other
    and print the results.    
    */

    int IntOne = 9;
    int IntTwo = 81;
    int Output = IntOne % IntTwo;
    printf("Modulus Operation!\n");
    printf("Modulus of %d %% %d comes out to: %d\n", IntOne, IntTwo, Output);
    printf("\n");

    // Declare a Char Variable
    /*
    We're declaring a char variable and printing the character and its ASCII value
    by using the %c and %d specifiers.    
    */

    char Letter = 'A';
    printf("Char Variable!\n");
    printf("Letter: %c\n", Letter);
    printf("ASCII Value: %d\n", Letter);
    printf("\n");

    // Input and Output with printf() and scanf()
    /*
    We use the scanf() for input from a user, and printf() for output,
    for an integer from the user. 
    */

    printf("In 'n Out Burger\n");
    // Integer
    int IntThree;
    printf("Enter a Integer:\n");
    scanf("%d", &IntThree);
    printf("Your Integer is: %d\n", IntThree);
    printf("\n");

    // Float
    float IntFour;
    printf("Enter another Integer:\n");
    scanf("%f", &IntFour);
    printf("Your Second Integer is: %.2f\n", IntFour);
    printf("\n");

    // Increment/Decrement Operators
    // Pre-Increment Operator
    // We use a pre-increment operator (++F) and assign the new value of F to G.
    int F = 42;
    int G = 56;
    printf("The Pre-Increment Operator\n");
    printf("F's value before increment is %d\n", F);
    printf("G's value before increment is %d\n", G);
    G=++F;
    printf("The new value of F after increment is %d\n", F);
    printf("The new value of G after increment is %d\n", G);
    printf("\n");

    // Post-Increment Operator
    // We use a post-increment operator (H++) and assign the value of H to I and then increment H.
    int H = 81;
    int I = 72;
    printf("The Post-Increment Operator\n");
    printf("H's value before increment is %d\n", H);
    printf("I's value before increment is %d\n", I);
    I=H++;
    printf("The new value of H after increment is %d\n", H);
    printf("The new value of I after increment is %d\n", I);

    return 0;
}