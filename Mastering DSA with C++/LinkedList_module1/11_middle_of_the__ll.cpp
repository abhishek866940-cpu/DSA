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
    public: 
    node* head ;
    Linkedlist(){
        head = NULL ;
    }

    //Insertion at beginning
    void InsertAtBeg(int value){
        node * temp = new node(value);
        if(head==NULL){
            head = temp  ;
            return ;
        }
        else{
            temp->next = head ;
            head = temp ;
            return ;
        }
    }

    //Middle of the linkedlist

    void middle(){
        node* temp = head  ;
        int size = 0 ;
        while(temp!=NULL){
            size++;
            temp = temp->next ;
        }
        temp = head ;
        int n = size-1 ;
        if(size%2!=0){  //if ll is odd
            n = n / 2 ;
            
            for(int i = 0 ; i < n ; i++){
                temp = temp->next ;
            }
            cout<<temp->val<<" "<<endl;
        }

        else{
            n = n / 2; 
            for(int i = 0 ; i < n ; i++){
                temp = temp->next ;
            }
            cout<<temp->val<<" "<<temp->next->val ;
        }

    }

    //display 

    void Display(){
    node*t = head ;
    while(t!=NULL){
        cout<<t->val<<" ";
        t = t->next ;
        }
        cout<<endl;
    }
};
int main(){
    Linkedlist ll;
    ll.InsertAtBeg(60);
    ll.InsertAtBeg(50);
    ll.InsertAtBeg(40);
    ll.InsertAtBeg(30);
    ll.InsertAtBeg(20);

    ll.Display();

    ll.middle();

    ll.InsertAtBeg(10);
    ll.Display();

    ll.middle();


    return 0 ;
}