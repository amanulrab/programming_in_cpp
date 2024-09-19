#include<iostream>
#include<vector>
using namespace std;

int main(){

    // vector<int> first;
    // vector<int> second;

    // first.push_back(10);
    // first.push_back(11);
    // first.push_back(12);
    // first.push_back(13);

    // traverse the vector using iterator
    //create an iterator

    // vector<int> ::iterator it = first.begin();//initialize

    // while(it !=first.end()){  //jab tak vector end na ho jaye
    //     cout<<*it<<" "; // print the iterator
    //     it++;
    // }
    // second.push_back(100); 
    // second.push_back(200); 
    // second.push_back(300);
    // second.push_back(400);

    // first.swap(second);

    // cout<<first[0]<<" "<<first[1]<<" "<<first[2]<<" "<<first[3]<<" "<<endl;


    // // for each loop
    // for(int i: first){
    //     cout<<i<<" ";
    // }
    //  for(int i: second){
    //     cout<<i<<" ";
    // }

    // cout<<first.front()<<endl;
    // cout<<first.back()<<endl;



    //creation
    // vector<int> marks;
    // marks.reserve(10);
    // cout<<marks.max_size()<<endl;//according to system maximum size of vector

    // marks.push_back(10);
    // marks.push_back(20);
    // marks.push_back(30);
    // marks.push_back(40);
    // marks.push_back(50);
    
    // marks.erase(marks.begin(),marks.end());
    // cout<<marks.size()<<endl;

    // marks.insert(marks.begin(),50);
    // cout<<marks[0]<<endl;
    
    // marks.clear();
    // cout<<marks.size()<<endl;

    // cout<<marks.size()<<endl;
    // cout<<marks.capacity()<<endl;

    // cout<<marks[0]<<endl;
    // marks[0]=100;
    
    //value initialization
    // cout<<marks[0]<<endl; 
    // cout<<marks.at(0);

    // cout<<"size: "<<marks.size()<<endl;

    // if(marks.empty()==true){
    //     cout<<"vector is empty";
    // }
    // else{
    //     cout<<"vector is not empty";
    // }

    //40 will be removed
    // marks.pop_back();
    // cout<<"size: "<<marks.size()<<endl;

    //first element willshow
    // cout<<marks.front()<<endl;

    //last element will show
    // cout<<marks.back()<<endl;

    // cout<<*(marks.begin())<<endl;

    // cout<<*(marks.end())<<endl;

    // vector<int> miles(10);

    // vector<int> distances(10,0);

    //2D vector

    // vector<vector<int>> arr(5, vector<int>(4,0));
    // //2D array created
    // //with 5 rows
    // //with 4 columns
    // //with initial value of each cell as "0"
   
    // //row count
    // int totalRows = arr.size();
    // //column count
    // int totalColumns = arr[0].size();
    
    //jagged array
    vector<vector<int>> brr(4);

    brr[0] = vector<int>(4);
    brr[0] = vector<int>(2);
    brr[0] = vector<int>(5);
    brr[0] = vector<int>(3);

    // int totalRowCount =brr.size();
   // int totalColumnCount= brr[i].size();



    return 0;

}