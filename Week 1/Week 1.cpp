// Week 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    std::cout << "Hello World! c++\n";

    int iVal1 = -1;
    short shVal2 = 0;
    int iVal3 = -2;

    std::cout << " \n V1 = " << iVal1;
    std::cout << " Address of V1 = " << &iVal1;
    std::cout << " \n value of V2 = " << shVal2;
    std::cout << " Address of V2 = " << &shVal2;
    std::cout << " \n value of V3 = " << iVal3;
    std::cout << " Address of V3 = " << &iVal3;

    std::cout << "\n\n\n !!! diff of V1 and V2 = " << (&iVal1 - &iVal3);
    std::cout << "\n sizeof(V!)" << sizeof(iVal1);


    std::cout << "\n\n *** End of Prog ***";
    
}

    
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
