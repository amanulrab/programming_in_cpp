#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"enter the value of n\n";
    cin>>n;

    /*
    *
    **
    ***
    ****
    *****
    
    */

    // for(int row=0; row<n; row++){
    //      for(int col=0; col<row+1; col++){
    //         cout<<"*"<<" ";
    //      }


/*
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5
*/
    //  for(int row=0; row<n; row++){
    //       for(int col=0; col<row+1; col++){
    //        cout<<row+1<<" ";
    //      }
    //      cout<<endl;
    // }

    
/*
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
    */
int count=1;
 for(int row=0; row<n; row++){
          for(int col=0; col<row+1; col++){
           cout<<count<<" ";
           count++;
         }
         cout<<endl;
    }

}