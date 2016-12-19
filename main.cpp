/* Computer Science 1 - Mersenne Prime Numbers Assignment
* Date: May 4, 2016
* Author: Joseph Schell
* Sources: None
* Compiled with: Bloodshed C++ version 5.11
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;

bool isPrime(long n);

// Display dialogue and makes sure that exponents between
// 2 and 19 are sent into the isPrime function
int main () {
	
	cout << "Mersenne Primes by Joseph Schell" << endl;
    cout << "n" << setw(21) << "Mersenne Prime" << endl;
    cout << "==" << setw(22) << " ================\n" << endl;
    
    long merPrime;
    	
	for (long n = 2; n <= 19; n++) {
		
		isPrime(n);
		merPrime = pow(2,n) - 1;	// Finds Mersenne number 
		
		// Checks if both 'n' and 'merPrime' are actual prime numbers.
		// Prints results to screen.	
		if (isPrime(n) && isPrime(merPrime)) {
			cout << n << setw(20) << merPrime << endl;
    	}
	}
	char reply;
    cout << "Enter q and press Enter to quit: ";
    cin >> reply;
    return 0;
}

// Checks if a number is prime.
bool isPrime(long n) {

	bool isPrime = true;
	
	for (long i = 2; i < n; i++) {
		if (n % i == 0) {
			isPrime = false;
			return 0;
		}
	}
	return true;
}


