//sort list (nodes ko sort krna hai)
#include<iostream>
using namespace std ;

class node{
    public:
    int val ;
    node * next ;
    node(int val){
        this->val = val ;
        next = NULL ;
    }
};

class Linkedlist{
    public :
    node* head ;
    Linkedlist(){
        head = NULL ;
    }

    void InsertAtEnd(int value){
        node* t = new node(value) ;
        if(head==NULL){
            head = t ;
            return ;
        }
        node* temp = head ;
        while(temp->next!=NULL){
            temp = temp->next ;
        }
        temp->next = t ;
    }

    void display(){
        node* temp = head ;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp = temp->next; 
        }
        cout<<endl;
    }

};

int main(){
    Linkedlist ll ;
    ll.InsertAtEnd(5);
    ll.InsertAtEnd(1);
    ll.InsertAtEnd(3);
    ll.InsertAtEnd(6);
    ll.InsertAtEnd(2);
    ll.InsertAtEnd(4);

    cout<<"list before sorting : ";
    ll.display();



    cout<<"list after sorting : ";
    ll.display();



    return 0 ;
}