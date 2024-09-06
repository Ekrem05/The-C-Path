#include<Windows.h>


void foo(void) {
    OutputDebugStringA("Hello_World!\n");

    char number; //8 bits/8 = 1byte 0000 0000
    short shortNum; //16bits/8 = 2bytes 0000 0000 0000 0000
    int integer; //32bits/8 = 4bytes 0000 0000 0000 0000 0000 0000 0000 0000
}   


int APIENTRY wWinMain(_In_ HINSTANCE hInstance,
                     _In_opt_ HINSTANCE hPrevInstance,
                     _In_ LPWSTR    lpCmdLine,
                     _In_ int       nCmdShow)
{
    foo();
    int number = 10;

    // Shift left by 1 bit
    number = number << 1; // Multiplies the number by 2. Result: 20 (binary: 10100)

    // Shift left by 2 bits
    number = number << 2; // Multiplies the number by 4. Result: 80 (binary: 1010000)

    // Shift right by 2 bits
    number = number << 2; // Divides the number by 4. Result: 80 (binary: 1010000)

    //int x = 0;
    //x = x | (1 << 4); //0000 OR 0001 0000 = 0001 0000
    //x = x | (1<<2); //0001 0000 OR 0100 = 0001 0100

    //int y = x & (1 << 5); // 0001 0100 AND 0010 0000 = 0000 0000



    //What is true in C?
    int x = 0; //FALSE - NOT TRUE - OFF - NOT SET
    int y = 1; //TRUE - SET - ON
    int z = 12131; //TRUE - SET - ON
    int w = -123; //TRUE - SET - ON

    //IN C things are either zero or they are not
    int less = x < y;
    int greater = x > y;
    int equal = x == y;
    int notEqual = x != y;  


    //Control flow
    if (less) {
        OutputDebugStringA("X is less than Y\n");
    }else if (greater) {
        OutputDebugStringA("X is greater than Y\n");
    }else if (equal) {
        OutputDebugStringA("X is equal to Y\n");
    }

    //Loops are the same
}
