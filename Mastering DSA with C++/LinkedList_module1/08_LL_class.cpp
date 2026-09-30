//insertion on end without using tail
#include<iostream>
using namespace std;
class Node{
    public:
    int val ;
    Node* next ;

    Node(int val){
        this->val = val ;
        this->next = NULL ;
    }
};
class Linkedlist{
    public:
    Node* head ;
    int size ;

    Linkedlist(){
        size = 0 ;
        head = NULL ;
    }

    void insertAtEnd(int val){
        Node* temp = new Node(val);
        if(head==NULL) head= temp ;
        else{
        Node* t = head ;
        while(t->next!=NULL){
            t = t->next ;
        }
        t->next = temp ;
    }
        size++;
    }
    void display(){
        Node* temp = head ;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp = temp->next ;
        }
        cout<<endl;
    }
};
int main(){
    Linkedlist ll;
    ll.insertAtEnd(10);
    ll.display();
    ll.insertAtEnd(20);
    ll.display();
    ll.insertAtEnd(30);
    ll.display();
    ll.insertAtEnd(40);
    ll.display();
    ll.insertAtEnd(50);
    ll.display();
    return 0 ;
}