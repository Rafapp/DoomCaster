#include <iostream>
#include <string>
#include <cmath> // Sqrt, round, log support

using namespace std;

// Default parameters
void PrintPlayerName(string pname = "DoomGuy"){
    cout << pname << "\n";
}

// Function that passes by reference to swap
void SwapPlayers(string &player1, string &player2){
    string temp = player1;
    player1 = player2;
    player2 = temp;
}

// Function overloading, many functions with same name!
void SwapPlayers(string player1, string player2, int swapSpeed){}
void SwapPlayers(string player1, string player2, int swapSpeed, float swapFrequency){}

// OOP
class DoomPlayer{
    public: 
        string playerName;
        int playerLevel;
        // Constructor
        DoomPlayer(){
            cout << "Doom player constructor called" << "\n";
        }
        // Function for class from inside
        void printPlayer(){
            cout << playerName << ", " << playerLevel << "\n";
        }
        void PrintPlayerFunny();
};
// Function for class from outside
void DoomPlayer::PrintPlayerFunny(){
    cout << "Poopy" << playerName << "\n";
};
// Inheritance
class SuperDoomPlayer:DoomPlayer{
    public:
        SuperDoomPlayer(){
            cout << "SUPER!";
        }
};

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

    // 2D Arrays (matrix)
    int map[3][3] = {
        {0,1,0},
        {0,1,0},
        {0,0,0}
    };

    // Structs (classes)
    // Unnamed structure
    struct{
        int hp;
        string gamertag;
    } player1, player2, player3;
    player1.hp = 100;
    player1.gamertag = "TheRaff";
    cout << "HP, Tag: " << player1.hp << ", " << player1.gamertag << "\n";
    
    // Named structure
    struct Player{
        int hp;
        string gamertag;
    }; // Don't forget the semicolon!
    Player namedPlayer;
    namedPlayer.hp = 75;
    namedPlayer.gamertag = "TheRaff";
    cout << "HP, Tag: " << namedPlayer.hp << ", " << namedPlayer.gamertag << "\n";

    // References (only store address)
    string playerVar = "Demon";
    string &classRef = playerVar;
    cout << "Var: " << playerVar << ", ref to var: " << classRef << "\n";

    // Memory address print is same as C
    cout << &classRef << "\n";

    // Pointers (store address + value)
    string* ptr = &playerVar;
    *ptr = "Human";
    cout << playerVar << "\n";

    // Printing player name with default params
    PrintPlayerName();
    PrintPlayerName("DoomGuyTwo");

    // Passing by reference, 1 is human 2 is demon we swap
    string playerVar2 = "Demon";
    cout << "Player1, Player2 b4 swap: " << playerVar << ", " << playerVar2 << "\n";
    SwapPlayers(playerVar, playerVar2);
    cout << "Player1, Player2 after swap: " << playerVar << ", " << playerVar2 << "\n";

    
    DoomPlayer rafa;
    rafa.playerName = "TheRaff";
    rafa.playerLevel = 999;
    rafa.printPlayer();
    rafa.PrintPlayerFunny();

    SuperDoomPlayer superRafa;

    // Access specifiers
    // Private: Members accessible outside
    // Public: Members accessible within
    // Protected: Members accessible within, and when inherited

    return 0;
}