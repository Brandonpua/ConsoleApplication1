// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "MathHelper.h"

int main()
{
    std::cout << "Hello World!\n";

    int result = fnMathHelper();
    std::cout << "Result from DLL: " << result << std::endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu