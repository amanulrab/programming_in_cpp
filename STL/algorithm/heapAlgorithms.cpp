#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){

    vector<int> arr(5);
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;

    //arr to max heap
    make_heap(arr.begin(),arr.end());
    for(int a : arr){
        cout<<a<<" ";
    }
    cout<<endl;
    
    //insertion
    //arr me element end karne ke baad push_heap () chalana hai
    arr.push_back(99);
    push_heap(arr.begin(),arr.end());
    for(int a : arr){
        cout<<a<<" ";
    }
    cout<<endl;
    //deletion
    pop_heap(arr.begin(),arr.end());
    arr.pop_back();
    for(int a : arr){
        cout<<a<<" ";
    }
    cout<<endl;

    //sort
    sort_heap(arr.begin(),arr.end());
    for(int a : arr){
        cout<<a<<" ";
    }
    cout<<endl;


    return 0;
}