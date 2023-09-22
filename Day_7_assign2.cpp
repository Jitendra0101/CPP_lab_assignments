#include <iostream>
using namespace std;

int findMin(int nums[], int n) 
{
    int min = nums[0];

    for (int i = 1; i < n; ++i) 
    {
        if (nums[i] < min) 
        {
            min = nums[i];
        }
    }

    return min;
}

int main() {
    int nums[] = {5, 2, 8, 7, 3};

    int n = sizeof(nums) / sizeof(nums[0]);

    int min = findMin(nums, n);

    cout << "The smallest element in the array is: " << min << endl;
    
    return 0;
}
