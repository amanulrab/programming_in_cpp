#include<iostream>
using namespace std;

void mixPyramid(int n){
    //part 1
    for(int i=0; i<n; i++){
        //stars
        for(int j=0; j<n-i; j++ ){
            cout<<"*";
        }
        //space
        for(int j=0; j<2*i+1; j++){
            cout<<" ";
        }
       // stars
        for(int j=0; j<n-i; j++ ){
            cout<<"*";
        }
        cout<<endl;
    }
    //part 2
    for(int i=0; i<n; i++){
        //stars
        for(int j=0; j<i+1; j++){
            cout<<"*";
        }
        //space
        for(int j=0; j<2*(n-i)-1; j++ ){
            cout<< " ";
        }
        //stars
         for(int j=0; j<i+1; j++){
            cout<<"*";
        }
        cout<<endl;
    }



}

int main(){
    int n;
    cout<<"enter the value of n\n";
    cin>>n;
    mixPyramid(n);
    return 0;

}