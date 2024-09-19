#include<iostream>
using namespace std;

void invertedfullPyramid(int n){
    for(int row=0; row<n; row++){
        // spaces
        for(int col=0; col<row; col++){
            cout<<"  ";
        }
        //stars
        for(int col=0; col<2*(n-row)-1; col++){
            cout<<"* ";
        }
        cout<<endl;
    }
     
 }

void fullPyramid(int n){
    for(int row=0; row<n; row++){
        // spaces
        for(int col=0; col<n-row-1; col++){
            cout<<"  ";
        }
        //stars
        for(int col=0; col<2*row+1; col++){
            cout<<"* ";
        }
        cout<<endl;
    }
     
 }


int main(){

    int n;
    cout<<"enter the value of n\n";
    cin>>n;
    fullPyramid(n);
    invertedfullPyramid(n);
    return 0;
}