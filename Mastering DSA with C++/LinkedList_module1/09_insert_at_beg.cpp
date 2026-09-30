#include<iostream>
using namespace std;
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
    int size ;
    node * head ;

    Linkedlist(){
        size = 0 ;
        head = NULL ;
    }

    //insert at beginning 

    void InsertAtBeg(int value){
        node * temp = new node(value);
        if(size==0){
            head = temp ;
            size++ ;
            return ;
        }
        else{
            temp->next = head ;
            head = temp ;
            size++ ;
            return ;
        }
    }

    //Insert at tail

    void InsertAtTail(int value){
        node * temp = new node(value);
        if(size==0){
            head = temp ;
            size++ ;
        }
        else{
            node * t = head ;
            while(t->next!=NULL){
                t = t->next ;
            }
            t->next = temp ;
            size++ ;
        }
    }

    //insert at index

    void InsertAtIdx(int idx ,int value){
        node * temp = new node(value);
        if(idx==0){
            InsertAtBeg(value);
        }
        else if(idx==size){
            InsertAtTail(value);
        }
        else if(idx < 0 || idx > size){
            cout<<"Invalid index "<<endl;
            free(temp);
            return ;
        }
        else{
            node * t = head ;
            for(int i = 0 ; i < idx-1 ; i++){
                t = t->next ;
            }
            temp->next = t->next ;
            t->next = temp ;
            size++ ;
        }
    }

    //get  an element

    int GetAnElement(int idx){
        if(idx==0) return head->val ;

        else if(idx==size-1){
            node * t = head ;
            while(t->next!=NULL){
                t = t->next ;
            }
            return t->val ;
        }

        else if(idx<0 || idx >= size){
            // cout<<"Invalid index ";
            return -1 ;
        }

        else{
            node * temp = head ;
            for(int i = 0 ; i < idx ; i++){
                temp = temp->next ;
            }
            return temp->val ;
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
    Linkedlist ll ;
    ll.InsertAtTail(10);
    ll.Display();
    ll.InsertAtTail(20);
    ll.Display();
    ll.InsertAtTail(30);
    ll.Display();

    ll.InsertAtBeg(24);
    ll.Display();
    ll.InsertAtBeg(36);
    ll.Display();

    ll.InsertAtIdx(2,80);
    ll.Display();

    cout<<ll.GetAnElement(10)<<endl;
    cout<<ll.GetAnElement(2)<<endl;

    return 0 ;
}