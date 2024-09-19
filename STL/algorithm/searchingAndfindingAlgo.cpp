#include<iostream>
#include<algorithm>
#include<vector>
#include<numeric>
using namespace std;

int main(){

    vector<int> arr;
    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(30);
    arr.push_back(40);
    arr.push_back(50);

    // int target = 40;
    // bool it = binary_search(arr.begin(),arr.end(),target);
    // cout<<it;

    // auto it = lower_bound(arr.begin(),arr.end(),35);
    // cout<<*it<<endl;

    //  auto it = upper_bound(arr.begin(),arr.end(),40);//upper bound 40 se bada 40 milne ke baad bhi
    // cout<<*it<<endl;

    // auto it= equal_range(arr.begin(),arr.end(),40);

    return 0;
}