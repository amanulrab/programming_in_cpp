#include <iostream>
#include <algorithm>
using namespace std;

bool binarySearch(int nums[], int n, int target)
{

    int s = 0;
    int e = n - 1;

    while (s <= e)
    {
        // int mid=(s+e)/2;
        int mid = s + (e - s) / 2;
        if (nums[mid] == target)
        {
            return mid;
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
    return -1;
}

int main()
{
    int nums[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    int n = 9;
    int target = 70;

    bool ans = binarySearch(nums, n, target);
    // bool ans = binary_search(nums, nums + n, target);  //using STL
    cout << ans << endl;
}