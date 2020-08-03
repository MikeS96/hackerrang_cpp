/**
 *  @file arrays_intro.cpp
 *  @author Miguel Saavedra (miguel.saaruiz@gmail.com)
 *  @brief Backwards array sorting
 *  @version 0.1
 *  @date 05-15-2020
 *
 *  task: Strip its decimal (i.e., truncate it) and print its hexadecimal representation (including the
 *  prefix) in lower case letters. Print it to a scale of decimal places, preceded by a or sign 
 *  (indicating if it's positive or negative), right justified, and left-padded with underscores so that 
 *  the printed result is exactly characters wide.
 * 
 *  Print it to a scale of exactly nine decimal places, expressed in scientific notation using upper case.
 *  Sample Input
 * 
 * 1
 * 100.345 2006.008 2331.41592653498
 * 
 * Sample Output
 * 
 * 0x64 
 * _______+2006.01  
 * 2.331415927E+03
 */

#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
	int T; cin >> T;
	cout << setiosflags(ios::uppercase);
	cout << setw(0xf) << internal;
	while(T--) {
		double A; cin >> A;
		double B; cin >> B;
		double C; cin >> C;

		cout << hex << showbase << nouppercase<<left;
		cout << (long long)A << endl;


		cout << setw(15) << showpos << setfill('_') << setprecision(2)<<fixed<<right;
		cout << B << endl;


		cout << scientific << setw(15) << setprecision(9) << uppercase<<noshowpos;
		cout << C << endl;

	}
	return 0;

}
