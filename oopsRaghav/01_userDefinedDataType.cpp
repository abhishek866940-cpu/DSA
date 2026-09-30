#include<iostream>
using namespace std;
class student{      //student is a new data type.
    public:
    string name;              //attributes
    int rollno;
    float marks;
};
void print(student s){
    cout<<s.name<<" "<<s.rollno<<" "<<s.marks<<endl;
}
int main(){
    student s1 ;
    s1.name = "Abhishek Prajapati";
    s1.rollno = 50 ;
    s1.marks = 87.7;

    student s2 ;
    s2.name = "Sheldon Copper";
    s2.rollno = 61;
    s2.marks = 99.9;

    print(s1);
    print(s2);
    return 0 ;
}