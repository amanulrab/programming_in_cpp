#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

// void printDouble(int a){
//     cout<<2*a<<" ";
// }

bool checkEven(int a){
    return a%2 == 0;
}

int main(){

    // vector<int> arr(6);
    // arr[0] = 10;
    // arr[1] = 20;
    // arr[2] = 30;
    // arr[3] = 40;
    // arr[4] = 50;
    // arr[5] = 60;  

    // cout<<"before shifting"<<endl;
    // for(int a : arr){
    //     cout<<a<<" ";
    // }  

    // rotate(arr.begin(),arr.begin()+3,arr.end());
    // cout<<"\nAfter shifting"<<endl;
    // for(int a : arr){
    //     cout<<a<<" ";
    // }

    vector<int> arr(6);
    arr[0] = 10;
    arr[1] = 11;
    arr[2] = 12;
    arr[3] = 13;
    arr[4] = 14;
    arr[5] = 15;

    partition(arr.begin(),arr.end(),checkEven);
    //ek side even no hoga or ek side odd

    for(int a : arr){
        cout<<a<<" ";
    }
    
    // auto it = unique(arr.begin(),arr.end());
    // //it iterator ke pahle saare unique element hai
    // //it ke baad saare duolicate element hai
    // arr.erase(it,arr.end());
    // for(int a : arr){
    //     cout<<a<<" ";
    // }

    //partition




    //jab container me kisi specific range me koi functuon apply karna ho tab ham for_each() ka use karte hai
    //for_each(arr.begin(),arr.end(),printDouble);

//     int target = 0;
//    // vector<int> :: iterator it = find(arr.begin(),arr.end(),target);
//     auto it = find(arr.begin(),arr.end(),target);
//     cout<<*it<<endl;//iterator ki location par value

    // auto it = find_if(arr.begin(),arr.end(),checkEven);
    // cout<<*it<<endl;


   // int target = 11;
    //int ans = count(arr.begin(),arr.end(),target);
   // cout<<ans<<endl;


    // int ans = count_if(arr.begin(),arr.end(),checkEven);
    // cout<<ans<<endl;

    // sort(arr.begin(),arr.end());
    // for(int a : arr){
    //     cout<<a<<" ";
    // }
    
    // cout<<endl;

    // reverse(arr.begin(),arr.end());
    // for(int a : arr){
    //     cout<<a<<" ";
    // }


    return 0;
}