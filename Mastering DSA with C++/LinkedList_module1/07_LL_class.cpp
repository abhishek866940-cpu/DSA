//Time complexity O(1)
#include<iostream>
using namespace std ;
class Node{         //user defined data type
    public:
    int val;
    Node* next ;

    Node(int val){
        this->val = val ;
        this->next = NULL ;
    }
};
class Linkedlist{           //user defined data structure
    public:
    Node* head ;
    Node* tail ;
    int size ;

    Linkedlist(){
        head = tail = NULL;
        size = 0 ;
    }

    void insertatend(int val){
        Node* temp = new Node(val);
        if(size==0) head = tail = temp ;
        else{               //size>0
            tail->next = temp ;
            tail = temp ;
        }
        size++ ;
    }

    void display(){
        Node* temp = head ;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp= temp->next ;
        }
        cout<<endl;
    }
};
int main(){
    Linkedlist ll;
    ll.insertatend(80);
    ll.display();
    ll.insertatend(90);
    ll.display();
    ll.insertatend(30);
    ll.display();
    ll.insertatend(40);
    ll.display();


    return 0 ;
}