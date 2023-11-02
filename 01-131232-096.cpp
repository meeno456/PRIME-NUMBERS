#include <iostream>
using namespace std;

bool prime(int number) {
    if (number <= 1) {
        return false;
    }
    if (number <= 3) {
        return true;
    }
    if (number % 2 == 0 || number % 3 == 0) {
        return false;
    }
    for (int i = 5; i * i <= number; i += 6) {
        if (number % i == 0 || number % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}


void fpr(int start, int end) {
    cout << "Prime numbers in the range " << start << " to " << end << " are:" << endl;
    for (int i = start; i <= end; ++i) {
        if (prime(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    int option;
    while (true) {
        cout << "Choose an option:" << endl;
        cout << "1. Find prime numbers in a range" << endl;
        cout << "2. Check if a specific number is prime" << endl;
        cout << "3. Exit" << endl;
        cin >> option;

        if (option == 1) 
        {
            int start, end;
            cout << "Enter the starting and ending range: ";
            cin >> start >> end;
            fpr(start, end);
        }
        else if (option == 2) 
        {
            int number;
            cout << "Enter a number to check for primality: ";
            cin >> number;
            if (prime(number)) {
                cout << number << " is prime." << endl;
            }
            else {
                cout << number << " is not prime." << endl;
            }
        }
        else if (option == 3) {
            break;
        }
        else {
            cout << "Invalid option. Please choose again." << endl;
        }
    }

    return 0;
}