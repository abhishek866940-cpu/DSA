//better way to approach the question
//what interviewer wants
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

    //middle of the linkedlist

    void middle(){
        node* slow = head ;
        node* fast = head ;
        while( fast!=NULL && fast->next!=NULL ){
            slow = slow->next ;
            fast = fast->next->next ;
        }
        cout<<slow->val<<endl ;  ;
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