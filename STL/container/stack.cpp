#include<iostream>
#include<stack>
using namespace std;

int main(){

    // //creation 
    // stack<int> st;

    // //insertion
    // st.push(10);
    // st.push(20);
    // st.push(30);
    // st.push(40);
    // //10 20 30 40

    // cout<<st.size()<<endl;
    // st.pop();
    // //10 20 30
    // cout<<st.size()<<endl;
    // //3
    // cout<<st.top()<<endl;
    // //30
    
    // if(st.empty()==true){
    //     cout<<"empty";
    // }
    // else{
    //     cout<<" not empty";
    // }

    stack<int> st1;
    stack<int> st2;

    st1.push(10);
    st1.push(20);

    st2.push(30);
    st2.push(40);

    st1.swap(st2);

    cout<<st1.top()<<" ";
    st1.pop();
    cout<<st1.top();
    return 0;
}