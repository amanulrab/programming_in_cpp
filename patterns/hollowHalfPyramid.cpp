#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"enter the value of n\n";
    cin>>n;

    

    for(int row=0; row<n; row++){
         for(int col=0; col<row+1; col++){
            if(row==0 || row== n-1 || col==0 || col==row+1-1){
                 cout<<"* ";
            }
            else{
                cout<<"  ";
            }
           
         }
         cout<<endl;
    }
}