//SC - O(1)
//TC - O(m+n)
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

    void MergeTwoList(node* headA , node* headB){
        node * a = headA ;
        node * b = headB ;

        node * t = new node(100);
        node * c = t ;

        while(a!=NULL && b!=NULL){
            if(a->val<=b->val){
                t->next = a ;
                a = a->next ;
                t = t->next ;
            }
            else{
                t->next = b ;
                b = b->next ;
                t = t->next ;
            }
        }

        if(a==NULL){
            t->next = b ;
        }
        else{
            t->next = a ;
        }

        head = c->next ;
    }


};

int main(){
    Linkedlist ll1 ;
    Linkedlist ll2 ;

    ll1.InsertAtEnd(1);
    ll1.InsertAtEnd(2);
    ll1.InsertAtEnd(5);

    cout<<"List 1 : ";
    ll1.display();

    ll2.InsertAtEnd(2);
    ll2.InsertAtEnd(3);
    ll2.InsertAtEnd(4);
    ll2.InsertAtEnd(6);
    ll2.InsertAtEnd(7);
    ll2.InsertAtEnd(8);

    cout<<"List 2 : ";
    ll2.display();

    Linkedlist ll3;

    ll3.MergeTwoList(ll1.head,ll2.head);

    cout<<"List after merging : ";
    ll3.display();
    return 0 ;
}