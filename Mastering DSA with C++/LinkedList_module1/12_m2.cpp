//using slow and fast pointer(optimized method)
//Remove the nth node from the last
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
    node * head ;
    Linkedlist(){
        head = NULL ;
    }

    //Insertion at end

    void InsertAtEnd(int value){
        node * t = new node(value);
        if(head==NULL){
            head = t ;
            return ;
        }
        else{
            node * temp = head ;
            while(temp->next!=NULL){
                temp = temp->next ;
            }
            temp->next = t ;
            
        }
    }

    //display

    void display(){
        node * temp = head ;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp = temp->next ;
        }
        cout<<endl ;
    }

    //remove nth position from the last

    node* remove_nth_node(int pos){
        node* slow = head ;
        node* fast = head ;

        for(int i = 1 ; i <= pos+1 ; i++){
            if(fast==NULL) return head = head->next ;
            fast = fast->next ;
        }

        while(fast!=NULL){
            slow = slow->next ;
            fast = fast->next ;
        }
        slow->next = slow->next->next ;
        return head ;
    }

    

};

int main(){
    Linkedlist ll ;
    ll.InsertAtEnd(10);
    ll.InsertAtEnd(20);
    ll.InsertAtEnd(30);
    ll.InsertAtEnd(40);
    ll.InsertAtEnd(50);
    ll.InsertAtEnd(60);
    ll.InsertAtEnd(70);

    ll.display();

    ll.remove_nth_node(7);

    ll.display();

    ll.remove_nth_node(5);

    ll.display();
    return 0 ;
}