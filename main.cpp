/* Computer Science 1 - Mersenne Prime Numbers Assignment
* Date: May 4, 2016
* Author: Joseph Schell
* Sources: None
*/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

//Function Prototypes
bool isPrime(long n);

int main () {
	
	long merPrime;
	cout << "Mersenne Primes by Joseph Schell" << endl;
	cout << "n" << setw(21) << "Mersenne Prime" << endl;
	cout << "==" << setw(22) << " ================\n" << endl;	
	
	for (long n = 2; n <= 19; n++) {
		isPrime(n);
		merPrime = pow(2,n) - 1;	// Finds Mersenne number 
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


