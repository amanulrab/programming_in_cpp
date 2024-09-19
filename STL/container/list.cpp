#include<iostream>
#include<list>
using namespace std;

int main(){
 
    // //creation
    // list<int> myList;

    // //insertion
    // myList.push_back(10);
    // //10
    // myList.push_back(20); 
    // //10 20
    // myList.push_back(30);
    // //10 20 30 
    // myList.push_back(40);
    // //10 20 30 40

    // myList.push_front(100) ;
    // //100 10 20 30 40

    // myList.pop_back();
    // //100 10 20 30

    // myList.pop_front();
    // //10 20 30
    
    // cout<<myList.size()<<endl;
    // myList.clear();
    // cout<<myList.size()<<endl;

    // if(myList.empty()==true){
    //     cout<<"list is empty"<<endl;
    // }
    // else{
    //     cout<<"list is empty"<<endl;
    // }

    // cout<<myList.front()<<endl;
    // cout<<myList.back()<<endl;

    // myList.push_back(10);

    // list<int> :: iterator it = myList.begin();

    // cout<<"before removing: "<<endl;
    // while(it != myList.end()){
    //     cout<<*it<<" ";
    //     it++;
    // }
    // cout<<endl;

    // myList.remove(10);
   
    // list<int> :: iterator it2 = myList.begin();

    // cout<<"after removing: "<<endl;
    // while(it2 != myList.end()){
    //     cout<<*it2<<" ";
    //     it2++;
    // }
    // cout<<endl;

    list<int> first;

    first.push_back(10);
    first.push_back(20);
    first.push_back(30);
    //10 20 30

      list<int> second;

    second.push_back(40);
    second.push_back(50);
    second.push_back(60);

    first.swap(second);

    first.insert(first.begin(),100);
    //100 10 20 30

    first.erase(first.begin(),first.end());
    cout<<first.size();

    // list<int> ::iterator it = first.begin();

    // while(it != first.end()){
    //     cout<<*it<<" ";
    //     it++;
    // }

    return 0;
}