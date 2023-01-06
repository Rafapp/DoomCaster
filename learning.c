#include <stdio.h> // Importing libraries
#include <stdbool.h> // Support for booleans
int main(){
    // This is a comment
    /*Multi line comment*/

    // Const used for constants 
    // (can't change, like final in java)
    const int num1 = 3, num5 = 4, num6 = 5; 
    float num2 = 3.1;
    char num3 = '3';
    float div = 5/2;

    printf("Integers: %d\n", num1 + num5 + num6);
    printf("Floats: %f\n", num2);
    printf("Doubles: %lf\n", num2);
    printf("Chars: %c\n", num3);

    printf("\ttab\n");
    printf("\\ backslash\n");
    printf("\" double quotes \"\n");

    printf("Div of ints as float: %f\n", div);
    printf("Display less precision %.3f\n", div);
    int andOp = 0 & 1;
    printf("& operator(bitwise): %d\n", andOp); // O and 0 is 0

    int orOp = 0 | 1;
    printf("| operator(bitwise): %d\n", orOp); // O and 0 is 0
    
    // << shifts left (multiply by 2^n, where x << n, x *= 2^n)
    int x = 0b0001 << 1;
    printf("Left shift (<<) of 0001: %d\n", x);

    x = 0b0010 >> 1;
    printf("Right shift (>>) of 0010: %d\n", x);

    printf("Size of int in bytes: %d\n", sizeof(x));

    // Import stdbool.h for bool support
    bool True = true;
    printf("Returns 1 if T, 0 if F: %d\n", True);
    
    // Ternary operator
    int twenty = 20;
    (twenty > 19) ? printf("20>19\n") : printf("20<19\n");

    // Strings are char arrays
    char aString[] = "This a string\n";
    printf("%s",aString);

    // Create array letter by letter
    char anotherString[] = {'a','b','c','\0'};
    printf("%s", anotherString);

    return 0;
}