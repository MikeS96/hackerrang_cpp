/*Goal: write a function called printMessage()
**that prints: Functions
*/

#include<iostream>

void printMessage(); //note, this is placed BEFORE main()

int main()
{
    printMessage();
    return 0;
}

void printMessage()
{
    std::cout << "Functions";
}
