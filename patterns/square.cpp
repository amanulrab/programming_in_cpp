#include<iostream>
using namespace std;

int main(){
    // total rows = 4;
    //every row -> 4 star

    // row = outer loop
    // col = inner loop

    int side;
    cout<<"enter the side\n";
    cin>>side;

    //outer loop -> 4 rows
    for(int row =0; row<side; row++){
        //inner loop -> 4 star 
        for(int col=0; col<side; col++){
            cout<<"*";
        }
        // 4 line print karane ke baad, next line me jana hai
        cout<<endl;
    }
}