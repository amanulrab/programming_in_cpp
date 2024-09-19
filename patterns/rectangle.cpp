#include<iostream>
using namespace std;

int main(){
    
    int length;
    int width;

    cout<<"enter the length"<<endl;
    cin>>length;

    cout<<"enter the width\n";
    cin>>width;

    //outer loop -> 4 rows
    for(int row =0; row<length; row++){
        //inner loop -> 4 star 
        for(int col=0; col<width; col++){
            cout<<"*";
        }
        // 4 line print karane ke baad, next line me jana hai
        cout<<endl;
    }
}