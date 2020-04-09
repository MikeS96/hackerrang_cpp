/*Put your code here*/

#include "main.hpp"
#include "mainFunctions.cpp"

int main()
{
    int val ;
    std::cout << "Introduzca las nalgas !\n";
    std::cin >> val;
    int c = add_things(val, 5);
    std::cout << "La suma es = " << c;
    return 0;
}
