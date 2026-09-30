//Find the intersection of node
#include<iostream>
using namespace std ;

class node{
    public :
    int val ;
    node* next ;
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
        node * temp = new node(value);
        if(head==NULL){
            head = temp ;
            return ;
        }
        node * t = head ;
        while(t->next!=NULL){
            t = t->next ;
        }
        t->next = temp ;
    }

    //display

    void display(){
        node * temp = head ;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp = temp->next ;
        }
        cout<<endl;
    }

    //Intersection

    void intersection(node * headA , node * headB){

        if(headA == NULL || headB == NULL || head == NULL){
            return ;
        }

        node * t = headA ;
        node * temp = headB ;

        while(t->next!=NULL){
            t = t->next ;
        }
        while(temp->next!=NULL){
            temp = temp->next ;
        }

        t->next = head ;
        temp->next = head ;

    }

    //finding intersecting node

    node * IntersectionNode(node * headA , node * headB){
        int nA = 0 ;
        int nB = 0 ;

        node * temp1 = headA ;
        node * temp2 = headB ;

        while(temp1!=NULL){
            nA++ ;
            temp1 = temp1->next ;
        }
        temp1 = headA ;

        while(temp2!=NULL){
            nB++ ;
            temp2 = temp2->next ;
        }
        temp2 = headB ;

        if(nA>nB){
            for(int i = 1 ; i <= nA-nB ; i++){
                temp1 = temp1->next ;
            }
        }
        else{
            for(int i = 1 ; i <= nB-nA ; i++){
                temp2 = temp2->next ;
            }
        }

        while(temp1!=temp2){
            temp1 = temp1->next ; 
            temp2 = temp2->next ;
        }

        return temp1 ;
    }
};

int main(){
    Linkedlist ll1 ;
    ll1.InsertAtEnd(4);
    ll1.InsertAtEnd(1);

    Linkedlist ll2 ;
    ll2.InsertAtEnd(5);
    ll2.InsertAtEnd(6);
    ll2.InsertAtEnd(1);
    
    Linkedlist ll3 ;
    ll3.InsertAtEnd(8);
    ll3.InsertAtEnd(4);
    ll3.InsertAtEnd(5);

    cout<<"The linkedlist 1 is : "<<endl ;
    ll1.display();
    cout<<"The linkedlist 2 is : "<<endl ;
    ll2.display();
    cout<<"The linkedlist 3 is : "<<endl ;
    ll3.display();
    
    ll3.intersection(ll1.head,ll2.head);

    cout<<"Linkedlist 1 after intersection "<<endl;
    ll1.display();
    cout<<"Linkedlist 2 after intersection"<<endl ;
    ll2.display();

    node * ans = ll3.IntersectionNode(ll1.head,ll2.head);
    cout<<"The value of the intersection node is : ";
    cout<<ans->val<<endl ;

    return 0;
}