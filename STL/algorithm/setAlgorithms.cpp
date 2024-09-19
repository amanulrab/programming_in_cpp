#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){

    vector<int> first;
    first.push_back(10);
    first.push_back(20);
    first.push_back(30);
    first.push_back(40);
    first.push_back(50);

    vector<int> second;
    second.push_back(10);
    second.push_back(20);
    second.push_back(60);
    second.push_back(70);
    second.push_back(80);

    // vector<int> result;
    // set_union(first.begin(),first.end(),second.begin(),second.end(),inserter(result,result.begin()));

    // for(int a : result){
    //     cout<<a<<" ";
    // }
    // cout<<endl;

    // vector<int> result;
    // set_intersection(first.begin(),first.end(),second.begin(),second.end(),inserter(result,result.begin()));

    // for(int a : result){
    //     cout<<a<<" ";
    // }
    // cout<<endl;

    // vector<int> result;
    // set_difference(first.begin(),first.end(),second.begin(),second.end(),inserter(result,result.begin()));

    // for(int a : result){
    //     cout<<a<<" ";
    // }
    // cout<<endl;

    vector<int> result;
    set_symmetric_difference(first.begin(),first.end(),second.begin(),second.end(),inserter(result,result.begin()));

    for(int a : result){
        cout<<a<<" ";
    }
    cout<<endl;

    

     
    return 0;
}