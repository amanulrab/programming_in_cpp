#include <iostream>
#include <algorithm>
using namespace std;

void binarySearch(int nums[], int n, int target, int &ansIndex)
{

    int s = 0;
    int e = n - 1;

    while (s <= e)
    {
        // int mid=(s+e)/2;
        int mid = s + (e - s) / 2;
        if (nums[mid] == target)
        {
            // ans found may or may not be first occurenec
            // store and compute
            ansIndex = mid;
            // kyunki first occurence ki baatho rhi hai
            // toh batao left me jau first occ k liye ya right me
            // e = mid - 1;  //first occurence
            // s = mid + 1;   // last occurence
        }
        else if (target > nums[mid])
        {
            s = mid + 1;
        }
        else if (target < nums[mid])
        {
            e = mid - 1;
        }
    }
}

int main()
{
    int nums[] = {20, 20, 20, 20, 20, 60, 70, 80, 90};
    int n = 9;
    int target = 20;
    int ansIndex = -1;

    binarySearch(nums, n, target, ansIndex);
    // bool ans = binary_search(nums, nums + n, target);  //using STL
    cout << ansIndex << endl;
}