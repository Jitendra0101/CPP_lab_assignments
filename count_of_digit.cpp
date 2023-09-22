#include <iostream>
using namespace std;

int main() {
    int number, digit;

    cout << "Enter a positive integer: ";
    cin >> number;

    cout << "Enter the digit you want to count: ";
    cin >> digit;

    if (number < 0) {
        cout << "Invalid input. Please enter a positive integer." << endl;
        return 1;
    }

    int count = 0;
    int tempNumber = number;

    while (tempNumber > 0) {
        int lastDigit = tempNumber % 10;
        if (lastDigit == digit) {
            count++;
        }
        tempNumber /= 10;
    }

    cout << "The digit " << digit << " appears " << count << " times in " << number << "." << endl;

    return 0;
}