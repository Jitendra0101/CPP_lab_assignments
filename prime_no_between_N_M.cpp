#include <iostream>
using namespace std;

int main() {
    int N, M;

    cout << "Enter the value of N: ";
    cin >> N;
    cout << "Enter the value of M: ";
    cin >> M;


    cout << "Prime numbers between " << N << " and " << M << " are:" << endl;

    for (int num = N; num <= M; num++) {
        
        bool isPrime = true;

        if (num <= 1) {
            isPrime = false;
        } 
        else 
        {
            for (int i = 2; i < num; i++) {
                cout << "\n i is : "<<i<<endl;
                if (num % i == 0) {
                    isPrime = false;
                    break;
                }
            }
        }
        
        if (isPrime) {
            cout << num << " ";
        }
    }

    cout << endl;

    return 0;
}