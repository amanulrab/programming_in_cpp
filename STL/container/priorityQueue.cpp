#include<iostream>
#include<queue>
using namespace std;

int main(){

    //min heap -> minumum value -> highest priority
    priority_queue<int,vector<int>, greater<int>> pq;

    pq.push(10);
    pq.push(20);
    pq.push(30);
    pq.push(40);

    //10 20 30 40

    cout<<pq.top()<<endl;
    //10
    pq.pop();
    // 20 30 40
    cout<<pq.top()<<endl;
    //20
    
    //creation
    // priority_queue<int> pq;

    // //max-heap->maximum value-> highest priority

    // pq.push(10);
    // //10
    // pq.push(20);
    // //20 10
    // pq.push(30);
    // //30 20 10
    // pq.push(40);
    // //40 30 20 10

    // //top element -> highest priority
    // cout<<pq.top()<<endl;//return the max value
    // pq.pop();// maximum element will pop
    // //40
    // //30 20 10
    // cout<<pq.top()<<endl;
    // //30

    // cout<<pq.size()<<endl;
    // //3

    // if(pq.empty()== true){
    //     cout<<"pq is empty"<<endl;
    // }
    // else{
    //     cout<<"pq is not empty"<<endl;
    // }

    // return 0;
}
