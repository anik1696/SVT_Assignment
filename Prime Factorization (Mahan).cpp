#include <bits/stdc++.h> // Includes all standard libraries
using namespace std;

int main()
{
    int n;
    cout << "Enter a number:" << endl;
    cin >> n; // Input the number from user

    list<int> l; // List to store unique prime factors

    // Loop from 2 to square root of n to check for prime factors
    for(int i = 2; i <= sqrt(n); i++) {
        if(n % i == 0) { // If i is a factor of n
            l.push_back(i); // Add i to the list of prime factors

            // Divide n by i until it is no longer divisible
            while(n % i == 0) {
                n = n / i;
            }
        }
    }

    // If n is greater than 1, it means n itself is a prime factor
    if(n != 1) {
        l.push_back(n);
    }

    cout << "All Prime Factors:" << endl;
    
    // Print all prime factors stored in the list
    for(int i : l) {
        cout << i << " ";
    }

    return 0;
}
