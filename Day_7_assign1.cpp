#include<iostream>
using namespace std;

int findMax(int nums[], int n) 
{

    int maxElement = nums[0]; 

    for (int i = 1; i < n; ++i) 
    {
        if (nums[i] > maxElement) 
        {
            maxElement = nums[i];
        }
    }

    return maxElement;
}

int main() {
    int nums[] = {3, 1, 7, 9, 2, 8, 6};
    // cout << sizeof(nums) << " " << sizeof(nums[0]);
    int n = sizeof(nums) / sizeof(nums[0]);
    cout << "size of array is: " << n << endl; 
    
    int maxElement = findMax(nums, n);
    cout << "The largest element is: " << maxElement << endl;

    return 0;
}
