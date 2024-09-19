#include<iostream>
#include<vector>
#include<forward_list>
#include<list>
using namespace std;

int main(){

    
    //forward iterator

    // forward_list<int> list;
    // list.push_front(10);
    // list.push_front(20);
    // list.push_front(30);

    // traverse using iterator

    // forward_list<int> :: iterator it = list.begin();

    // while(it != list.end()){
    //    // cout<<*it<<" ";
    //    (*it) = (*it) + 5 ;
    //     it++;
    // }

    // it = list.begin();
    // while(it != list.end()){
    //     cout<<*it<<" ";
    //     it++;
    // }


    list<int> l;
    l.push_back(10);
    l.push_back(20);
    l.push_back(30);

    //traverse using iterator in forward direction

    // list<int> :: iterator it = l.begin();

    // while(it != l.end()){
    //    // cout<<*it<<" ";
    //    (*it) = (*it) + 5 ;
    //     it++;
    // }

    // it = l.begin();
    // while(it != l.end()){
    //     cout<<*it<<" ";
    //     it++;
    // }

   // traverse using iterator in backward direction

    // list<int> :: iterator it = l.end();

    // while(it != l.begin()){
    //    // cout<<*it<<" ";
    //    (*it) = (*it) + 5 ;
    //    cout<<*it<<" ";
    //     it--;
    // }

    
    //random access iterator
    vector<int> arr= {10,20,30,40,50};

    //traverse using iterator
    // vector<int> :: iterator it = arr.begin();

    // while(it != arr.end()){
    //     //write
    //     *it = *it + 7;
    //     //read
    //     cout<<*it<<" ";
    //     //forward move
    //     it++;
    // }

    //backward direction
    //   vector<int> :: iterator it = arr.end();

    //   while(it != arr.begin()){
    //     //pehle piche jaunga bavkward
    //     it--;
    //     //write
    //     *it = *it + 7;
    //     //read
    //     cout<<*it<<" ";
    //     //forward move
    // }

    //random access
     vector<int> :: iterator it = arr.begin()+1;

    while(it != arr.end()){
        //write
        *it = *it + 7;
        //read
        cout<<*it<<" ";
        //forward move
        it++;
    }
    


    return 0;
}

