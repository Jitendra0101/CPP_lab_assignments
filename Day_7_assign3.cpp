#include <iostream>
using namespace std;

int findSecondLargest(int arr[], int size) 
{
    
    int firstLargest = arr[0];
    int secondLargest = arr[0];

    for (int i = 1; i < size; i++) 
    {
        if (arr[i] > firstLargest) 
        {
            secondLargest = firstLargest;
            firstLargest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != firstLargest) 
        {
            secondLargest = arr[i];
        }
    }

    return secondLargest;
}

int main() {
    int arr[] = {7, 2, 8, 4, 1, 7, 9, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    int secondLargest = findSecondLargest(arr, size);

    cout << "Second largest integer: " << secondLargest << endl;
    
    return 0;
}
