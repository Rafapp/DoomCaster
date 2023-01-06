#include <iostream>
#include <string>
#include <cmath> // Sqrt, round, log support

using namespace std;

int main() {
    // Standard print
    cout << "Hello World!\n"; 

    // With variable
    const int age = 21;
    cout << "My age is: " << age << "\n";
    
    // Listen for input
    cout << "Enter a number: ";
    int x;
    cin >> x;
    cout << "Ur number is: " << x << "\n";

    // Scientific notation
    float exp = 3E6;
    cout << "Scientific notation: " << exp << "\n";

    // Booleans, output as 0 or 1
    bool yes = true;
    cout << yes << "\n";

    // Ascii character support
    char letter = 65; // 65 is capital A in ascii
    cout << letter << "\n";

    // String support with #include <string>
    string magicSpell = "Fireball";
    cout << magicSpell << "\n";

    // String supports concatenation, length, append
    cout << magicSpell + " explosion\n";
    cout << magicSpell.append(" explosion\n");
    cout << "Spell char len with length: " << magicSpell.length() << "\n";
    cout << "Spell char len with size: " << magicSpell.size() << "\n";

    // If the stdin namespace is avoided we use std::
    std::cout << "This print uses std::cout\n";

    // Native math support
    // Max and min:
    cout << "The max of -10 and 100 is: " << max(-10, 100) << "\n";
    cout << "Whereas the min of -10 and 100 is: " << min(-10, 100) << "\n";

    // cmath library
    cout << "Log_2(1024): " << log2(1024) << "\n";
    cout << "Sqrt of 2: " << sqrt(2) << "\n";
    cout << "Rounding pi: " << round(3.1415926535) << "\n";

    // Other math functions:
    /*
        abs(x)	Returns the absolute value of x
        acos(x)	Returns the arccosine of x
        asin(x)	Returns the arcsine of x
        atan(x)	Returns the arctangent of x
        cbrt(x)	Returns the cube root of x
        ceil(x)	Returns the value of x rounded up to its nearest integer
        cos(x)	Returns the cosine of x
        cosh(x)	Returns the hyperbolic cosine of x
        exp(x)	Returns the value of Ex
        expm1(x)	Returns ex -1
        fabs(x)	Returns the absolute value of a floating x
        fdim(x, y)	Returns the positive difference between x and y
        floor(x)	Returns the value of x rounded down to its nearest integer
        hypot(x, y)	Returns sqrt(x2 +y2) without intermediate overflow or underflow
        fma(x, y, z)	Returns x*y+z without losing precision
        fmax(x, y)	Returns the highest value of a floating x and y
        fmin(x, y)	Returns the lowest value of a floating x and y
        fmod(x, y)	Returns the floating point remainder of x/y
        pow(x, y)	Returns the value of x to the power of y
        sin(x)	Returns the sine of x (x is in radians)
        sinh(x)	Returns the hyperbolic sine of a double value
        tan(x)	Returns the tangent of an angle
        tanh(x)	Returns the hyperbolic tangent of a double value
    */

    // Continue, we skip a loop iteration so it prints 4
    int j = 0;
    for (int i = 0; i < 5; i++)
    {
        if (i == 1)
        {
            continue;
        }
        j++;
    }
    cout << "Did " << j << " iterations with a continue in a i < 5 loop\n";
    
    // Foreach loop support
    int nums[] = {5,4,3,2,1};
    for(int num : nums)
    {
        cout << num << "\n";
    }

    // Array size
    cout << "The previous array has byte size: " << sizeof(nums) << "\n";
    cout << "Dividing that by data type (int), we have element size: " << sizeof(nums) / sizeof(int) << "\n";
    return 0;
}