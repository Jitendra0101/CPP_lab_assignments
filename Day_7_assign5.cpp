#include <iostream>
using namespace std;

bool search(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return true;
        }
    }
    return false;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 3;

    if (search(arr, n, target)) {
        cout <<  target << " is present in the array." << endl;
    } else {
        cout << target << " is not present in the array." << endl;
    }

    return 0;
}
