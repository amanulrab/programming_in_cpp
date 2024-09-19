#include<iostream>
#include<queue>
using namespace std;

int main(){

    // //creation
    // queue<int> q;

    // //insertion
    // q.push(10);
    // q.push(20);
    // q.push(30);
    // q.push(40);
    // //10 20 30 40

    // q.pop();
    // //20 30 40

    // cout<<q.size()<<endl;

    // if(q.empty()==true){
    //     cout<<"queue is not empty"<<endl;
    // }
    // else{
    //     cout<<"queue is not empty"<<endl;
    // }

    // cout<<q.front()<<endl;
    // cout<<q.back()<<endl;

    queue<int> first;
    queue<int> second;

    first.push(10);
    first.push(30);

    second.push(40);
    second.push(60);

    first.swap(second);

    cout<<first.front()<<" "<<first.back()<<" ";


    return 0;
}