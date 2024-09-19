#include<iostream>
using namespace std;

void invertedHollowPyramid(int n){
    for(int row=0; row<n; row++){
        // spaces
        for(int col=0; col<row; col++){
            cout<<"  ";
        }
        //stars
        for(int col=0; col<2*(n-row)-1; col++){
            if(row==0 || row==n-1 ||col==0 || col==2*(n-row)-1-1)
            cout<<"* ";
            else
            cout<<"  ";
        }
        cout<<endl;
    }
     
 }


int main(){

    int n;
    cout<<"enter the value of n\n";
    cin>>n;
    invertedHollowPyramid(n);
    return 0;
}