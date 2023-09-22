#include <iostream>
using namespace std;

int main() {
    char* words[] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};

    int N;
    cout << "Enter a positive integer: ";
    cin >> N;

    if (N < 0) {
        cout << "Please enter a positive integer." << endl;
        return 1;
    }

    if (N == 0) {
        cout << "Zero" << endl;
        return 0;
    }

    cout << "In words: ";

    int reversedNum = 0;
    while (N > 0) {
        int digit = N % 10;
        reversedNum = reversedNum * 10 + digit;
        N /= 10;
    }

    while (reversedNum > 0) {
        int digit = reversedNum % 10;
        cout << words[digit] << " ";
        reversedNum /= 10;
    }

    cout << endl;

    return 0;
}