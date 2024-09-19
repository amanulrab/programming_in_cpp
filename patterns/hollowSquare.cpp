# include<iostream>
using namespace std;

int main(){
    int side;
    cout<<"enter the sides\n";
    cin>>side;

    for(int i=0; i<side; i++){
        for(int j=0; j<side; j++){
            // if(i==0 || i==side-1){
            // cout<<"*";
            // }
            // else{
            //     if(j==0 ||j==side-1){
            //         cout<<"*";
            //     }
            //     else{
            //             cout<<" ";
            //         }
            // }
//    // another method
//             if(i==0 ||i==side-1 || j==0 || j==side-1){
//                 cout<<"*";
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }

    /*
    * * * * *
    * *     *
    *  *    *
    *     * *
    * * * * *   
    */
            if(i==0 ||i==side-1 || j==0 || j==side-1 || i==j){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}