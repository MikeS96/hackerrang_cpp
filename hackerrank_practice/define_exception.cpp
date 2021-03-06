/**
 *  @file define_exception.cpp
 *  @author Miguel Saavedra (miguel.saavedra@uao.edu.co)
 *  @brief Create a class with a custom exception
 *  @version 0.1
 *  @date 06-07-2020
 *
 *  task: You inherited a piece of code that performs username validation for your company's website. 
 *  The existing function works reasonably well, but it throws an exception when the username is too short.
 *  Upon review, you realize that nobody ever defined the exception.
 *  
 *  The inherited code is provided for you in the locked section of your editor. 
 *  Complete the code so that, when an exception is thrown, it prints Too short: n (where
 *  is the length of the given username). 
 */

#include <iostream>
#include <string>
#include <sstream>
#include <exception>
using namespace std;

class BadLengthException {
    private: 
        int n;
    public:
        BadLengthException(int errornumber) {
            n = errornumber;
        }
    
        int what() {
            return n;
        }
};


bool checkUsername(string username) {
	bool isValid = true;
	int n = username.length();
	if(n < 5) {
		throw BadLengthException(n);
	}
	for(int i = 0; i < n-1; i++) {
		if(username[i] == 'w' && username[i+1] == 'w') {
			isValid = false;
		}
	}
	return isValid;
}

int main() {
	int T; cin >> T;
	while(T--) {
		string username;
		cin >> username;
		try {
			bool isValid = checkUsername(username);
			if(isValid) {
				cout << "Valid" << '\n';
			} else {
				cout << "Invalid" << '\n';
			}
		} catch (BadLengthException e) {
			cout << "Too short: " << e.what() << '\n';
		}
	}
	return 0;
}
