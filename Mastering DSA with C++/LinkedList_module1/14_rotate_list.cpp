#include<iostream>
using namespace std ;

class node{
    public: 
    int val ;
    node* next ;
    node(int val){
        this->val = val ;
        next = NULL ;
    }
};

class LinkedList{
    public:
    node* head ;
    LinkedList(){
        head = NULL ;
    }

    void InsertionAtEnd(int value){
        node* temp = new node(value);
        if(head==NULL){
            head = temp ;
            return ;
        }
        else{
            node * t = head ;
            while(t->next!=NULL){
                t = t->next ;
            }
            t->next = temp ;
        }
    }

    void display(){
        node* temp = head ;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp = temp->next ;
        }
        cout<<endl ;
    }


    //rotate linkedlist

    node* RotateList(){
        if(head == NULL ||head->next == NULL){
            return head ;
        }
        int k ;
        cout<<"Enter the value of k : ";
        cin>>k;

        int size = 0 ;

        node*temp = head ; 

        while(temp!=NULL){
            size++ ; 
            temp = temp->next ;
        }
        temp = head ;
        node* t = head ;

        k = k % size ;

        if(k==0){
            return head ;
        }

        while(temp->next!=NULL){
            temp = temp->next ;
        }

        for(int i = 1 ; i < size-k ; i++){
            t = t->next ;
        }

        temp->next = head ;
        head = t->next ;
        t->next = NULL ;
        return head; 
}
};

int main(){
    LinkedList ll ;

    ll.InsertionAtEnd(10);
    ll.InsertionAtEnd(20);
    ll.InsertionAtEnd(30);
    ll.InsertionAtEnd(40);
    ll.InsertionAtEnd(50);
    ll.InsertionAtEnd(60);
    ll.InsertionAtEnd(70);

    ll.display();

    node* a =ll.RotateList();

    ll.display();

    return 0 ;
}
