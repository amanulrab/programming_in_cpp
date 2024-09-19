#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main(){
    
    //creation
    // unordered_map<string,string> table;//operetion 0(1)
    //ordered map
    map<string,string> table;//o(n)
    //insertion
    table["in"]="India";
    //insertion
    table.insert(make_pair("en","England"));
    //insertion
    pair<string,string> p;
    p.first= "br";
    p.second= "brazil";
    table.insert(p);

    // cout<<table.size()<<endl;
    // table.clear();
    // cout<<table.size()<<endl;

    // if(table.empty()==true){
    //     cout<<"table is empty"<<endl;
    // }
    // else{
    //     cout<<"table is not empty"<<endl;
    // }

    // cout<<table["en"]<<endl;
    // table["en"] = "england";
    // cout<<table["en"]<<endl;


    // cout<<table.at("en")<<endl;
    // table.at("en") = "england";

    //traverse the map

   // unordered_map<string,string>:: iterator it= table.begin();
    map<string,string>:: iterator it= table.begin();
    while(it != table.end()){
        pair<string,string> p= *it;
        cout<<p.first<<" "<<p.second<<endl;//elements printed in sorted order, sorting is performed on the basis of key
        it++;
    }

    // cout<<table.size()<<endl;

    // table.erase(table.begin(),table.end());
    // cout<<table.size()<<endl;

    //find method it returns an iterator
    // if(table.find("in") != table.end()){
    //     cout<<"key found"<<endl;
    // }
    // else{
    //     cout<<"key not found";
    // }

    //count method ,it does not allows duplcate keys
    // if(table.count("in") == 0){
    //     cout<<"key not found"<<endl;
    // }
    // if(table.count("in") == 1 ){
    //     cout<<"key found";
    // }
    


    return 0;
}