#include<iostream>
using namespace std;

int main(){
    
    int length;
    int width;

    cout<<"enter the length"<<endl;
    cin>>length;

    cout<<"enter the width\n";
    cin>>width;

    for(int row=0; row<length; row++){
        for(int col=0; col<width; col++){
            // first amd last column me all stars
            if(row==0 || row==length-1){
            cout<<"*";
            }
            //middle rows
            else{
                if(col==0 || col== width-1){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
        }
        cout<<endl;
    }
}