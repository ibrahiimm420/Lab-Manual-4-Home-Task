#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 151; i++) {
        
        if (i % 10 == 0) {
            continue; 
        }

        cout << i << " ";

        if (i % 20 == 0) {
        cout << endl; 
        }
    }

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int number, originalNumber, remainder, sum = 0;

    cout << "Enter any number: ";
    cin >> number;

    originalNumber = number; 

    while (number > 0) {
        remainder = number % 10; 
        sum += remainder;      
        number /= 10;          
    }

    cout << "sum of digits of " << originalNumber << " is: " << sum << endl;

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int num;
    bool isPrime = true;

    cout << "Enter any number: ";
    cin >> num;

    if (num <= 1) {
        isPrime = false;
    } else {
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime)
        cout << num << " is a prime number." << endl;
    else
        cout << num << " is not a prime number." << endl;

    return 0;
}





