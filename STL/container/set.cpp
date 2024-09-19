#include<iostream>
#include<unordered_set>
#include<set>
using namespace std;

int main(){

    // //creation ordered
    // set<int> st;

    // //insertion
    // st.insert(10);
    // st.insert(20);
    // st.insert(30);
    // st.insert(40);

    // //
    // set<int> :: iterator it =st.begin();

    // while(it != st.end()){
    //     cout<<*it<<" ";
    //     it++;
    // }

     //creation
    unordered_set<int> st;

    //insertion
    st.insert(10);
    st.insert(20);
    st.insert(30);
    st.insert(40);

    //find()
    if(st.find(10) != st.end()){//find karte hue agar end tak nahi pahuche tab
       cout<<"found"<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }

    //count(), it return element count 
    if(st.count(10) == 1){
        cout<<"found"<<endl;
    }
    if(st.count(10) == 0){
        cout<<"not found"<<endl;
    }

    // // cout<<st.size()<<endl;
    // // st.clear();
    // // cout<<st.size()<<endl;

    // if(st.empty()){
    //     cout<<"set is empty"<<endl;
    // }
    // else{
    //     cout<<"not empty"<<endl;
    // }

    // st.erase(st.begin(),st.end());




    // //tracerse
    // unordered_set<int> :: iterator it =st.begin();

    // while(it != st.end()){
    //     cout<<*it<<" ";
    //     it++;
    // }

    // return 0;

}