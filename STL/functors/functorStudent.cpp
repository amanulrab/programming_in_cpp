#include<iostream>
using namespace std;

class Student{
    public:
    int marks;
    string name;
    Student(int m, string n){
        this->marks = m;
        this->name = n;
    }
    Student(){

    }

};

//functor
class StudentComparator{
    public:
    bool operator()(Student a , Student b){
        return a.marks<b.marks;//ascending order ans
    }
};

int main(){
    Student s1;
    Student s2;

    s1.marks = 93;
    s1.name = "aman";

    s2.marks = 97;
    s2.name = "sam";

    StudentComparator cmp;

    if(cmp(s1,s2)){
        cout<<"aman marks less than sam"<<endl;
    }
    else{
        cout<<"sam marks greater than aman"<<endl;
    }
    
   return 0;
}