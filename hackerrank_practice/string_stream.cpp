#include <sstream>
#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
    stringstream ss(str);
    vector<int> values;
    int numb; // Temporal variable to receive ints
    char temp; // Temporal variable to receive the comas
    while(ss >> numb) // read the word from the ss buffer
    {
        values.push_back(numb); // push the int
        ss >> temp; // read the comma
    }

    return values;
	// Complete this function
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}

