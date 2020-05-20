/**
 *  @file if_else.cpp
 *  @author Miguel Saavedra (miguel.saaruiz@gmail@gmail.com)
 *  @brief If and Else statements
 *  @version 0.1
 *  @date 05-15-2020
 *
 *  task: If 1 <= n <= 9, then print the lowercase English word corresponding 
 *	to the number (e.g., one for , two for , etc.); otherwise, print Greater than 
 *  9 instead.
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    if (n == 1){
        cout << "one" << endl;
    }
    else if (n == 2){
        cout << "two" << endl;
    }
    else if (n == 3){
        cout << "three" << endl;
    }
    else if (n == 4){
        cout << "four" << endl;
    }
    else if (n == 5){
        cout << "five" << endl;
    }
    else if (n == 6){
        cout << "six" << endl;
    }
    else if (n == 7){
        cout << "seven" << endl;
    }
    else if (n == 8){
        cout << "eight" << endl;
    }
    else if (n == 9){
        cout << "nine" << endl;
    }
    else {
        cout << "Greater than 9" << endl;
    }


    return 0;
}

