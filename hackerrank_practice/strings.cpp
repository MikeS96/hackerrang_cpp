#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string a, b;
    cin >> a >> b;

    cout << a.size() << " " << b.size() << endl;
    cout << a + b << endl;

    char temp; // Temporal char to save the first value of the string

    string a_prime = a;
    a_prime[0] = b[0];


    string b_prime = b;
    b_prime[0] = a[0];
    
    cout << a_prime << " " << b_prime;


  
    return 0;
}

