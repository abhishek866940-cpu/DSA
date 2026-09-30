#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    int rollno;
    float cgpa ;

    Student(){                                  //Default Constructor  

    }
    Student(string n , int r , float g){        //Parameterised Constructor
        name = n ;
        rollno = r ;
        cgpa = g ;
    }
    Student(string n,int r){                    //Parameterised Constructor
        name = n ;
        rollno = r ;
    }
    Student(int r){                             //Parameterised Constructor
        rollno = r ;
    }
    Student(int r,float g , string n){          //Parameterised Constructor
        rollno = r ;
        cgpa = g;
        name = n ;
    }
};
int main(){
    Student s1("Abhishek Prajapati",50,8.7);

    Student s2;
    s2.name = "Sheldon Copper";
    s2.rollno = 61 ;
    s2.cgpa = 9.9 ;

    Student s3("Leonard Hofstader",55);
    s3.cgpa = 9.8 ;

    Student s4(45);
    s4.name = "Penny";
    s4.cgpa = 1.5;

    Student s5(10,6.7,"Raj kothrapali");

    Student s6 = s1 ;
    s6.name = "Bernadette";         //deep copy

    Student s7(s1);                 //deep copy
    s7.name = "Aegon";

    cout<<s1.name<<" "<<s1.rollno<<" "<<s1.cgpa<<endl;
    cout<<s2.name<<" "<<s2.rollno<<" "<<s2.cgpa<<endl;
    cout<<s3.name<<" "<<s3.rollno<<" "<<s3.cgpa<<endl;
    cout<<s4.name<<" "<<s4.rollno<<" "<<s4.cgpa<<endl;
    cout<<s5.name<<" "<<s5.rollno<<" "<<s5.cgpa<<endl;
    cout<<s6.name<<" "<<s6.rollno<<" "<<s6.cgpa<<endl;
    cout<<s7.name<<" "<<s7.rollno<<" "<<s7.cgpa<<endl;

    return 0 ;
}