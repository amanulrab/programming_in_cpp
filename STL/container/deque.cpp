#include<iostream>
#include<deque>
using namespace std;

int main(){

    //creation
    deque<int> dq;

    //insertion
    dq.push_back(10);
    dq.push_back(20);
    dq.push_back(30);
    //10 20 30

    dq.push_front(100);
    //100 10 20 30

    dq.pop_front();
    //10 20 30

    dq.pop_back();
    //10 20

    cout<<dq.size()<<endl;
    cout<<dq.front()<<endl;
    cout<<dq.back()<<endl;

    if(dq.empty()==true){
        cout<<"empty";
    }
    else{
        cout<<" not empty"<<endl;
    }

    deque<int> :: iterator it= dq.begin();
    
    while(it != dq.end()){
        cout<<*it<<" ";
        it++;
    }

    // cout<<dq[0]<<endl;
    cout<<dq.at(0)<<endl;

    cout<<dq.size()<<endl;
    dq.clear();

    cout<<dq.size()<<endl;

    dq.insert(dq.begin(),101);
    cout<<dq[0]<<endl;

    dq.erase(dq.begin(),dq.end());
    cout<<dq.size();

    return 0;
}