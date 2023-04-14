#include <stdio.h>   // Importing libraries
#include <stdbool.h> // Support for booleans
#include <string.h>  // String functions
#include <math.h>    // Math functions

// Functions! Declaring:
void aFunction(int, int);
void stringListeners();

void aFunction(int num1, int num2)
{
    printf("hello world!, %d, %d\n", num1, num2);
}

void stringListeners()
{
    // Listen for single input
    int numInput;
    printf("Please type number: \n");
    scanf("%d", &numInput);
    printf("Your number is: %d\n", numInput);

    // Listen for multiple inputs
    int numInput1;
    int numInput2;
    printf("Please type numbers: \n");
    scanf("%d %d", &numInput1, &numInput2);
    printf("Your number is: %d\n", numInput);

    // String input, considers space ( ) terminating char tho
    char name[30];
    scanf("%s", name);

    // Use fgets to read an entire line
    // fgets(var, sizeof(var), stdin)
    fgets(name, sizeof(name), stdin);

    // Print a memory address
    printf("%p", &name);
}

int main()
{
    // This is a comment
    /*Multi line comment*/

    aFunction(10, 20);

    // Const used for constants
    // (can't change, like final in java)
    const int num1 = 3, num5 = 4, num6 = 5;
    float num2 = 3.1;
    char num3 = '3';
    float div = 5 / 2;

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
    char aString[] = "This a string";
    printf("%s\n", aString);

    // Create array letter by letter
    char anotherString[] = {'a', 'b', 'c', '\0'};
    printf("%s\n", anotherString);

    // Get length of a string, sizeof would ignore the \0 char
    printf("Length: %d\n", strlen(anotherString));

    // Copy right to left
    strcpy(aString, anotherString);

    // Compare two strings, 0 if equal other otherwise
    printf("%d\n", strcmp(aString, anotherString));

    // Pointers: Store memory address of a variable as value
    int myAge = 21;
    int *ptr = &myAge;
    printf("Mem: %p\n", ptr);    // This would print the memory address
    printf("Value: %d\n", *ptr); // This would print the value

    // MATH:
    printf("Square rt: %f\n", sqrt(2));     // Square root
    printf("Ceiling: %f\n", ceil(sqrt(2))); // Ceiling
    printf("Floor: %f\n", floor(sqrt(2)));  // Floor
    printf("2^8 is: %f\n", pow(2, 8));      // Power

    // Other math functions:
    /*
        abs(x)	Returns the absolute value of x
        acos(x)	Returns the arccosine of x
        asin(x)	Returns the arcsine of x
        atan(x)	Returns the arctangent of x
        cbrt(x)	Returns the cube root of x
        cos(x)	Returns the cosine of x
        exp(x)	Returns the value of Ex
        sin(x)	Returns the sine of x (x is in radians)
        tan(x)	Returns the tangent of an angle
    */

    // STRUCTS:
    // Declaration
    struct Player
    {
        int xp;
        char gamertag[30];
    };

    // Assigning values 1 by 1
    struct Player testPlayer;
    testPlayer.xp = 999;
    strcpy(testPlayer.gamertag, "TheRaff");
    printf("Player level %d and tag %s\n", testPlayer.xp, testPlayer.gamertag);

    // Single line assignment
    struct Player testPlayer2 = {1000, "TheRaff2"};
    printf("Player level %d and tag %s\n", testPlayer2.xp, testPlayer2.gamertag);

    // Copying a structure
    testPlayer = testPlayer2;
    printf("Player level %d and tag %s\n", testPlayer.xp, testPlayer.gamertag);
    printf("test\n");

    // ENUMS
    enum Difficulty
    {
        Im_too_young_to_die,
        Hey_not_too_rough,
        Hurt_me_plenty,
        Ultra_violence,
        Nightmare
    };
    enum Difficulty selectedDifficulty = Nightmare;
    printf("Printing %d, which is \"Nightmare\"", selectedDifficulty);
    return 0;
}