#include<iostream>
using namespace std;

class NODE {
    public:
    int data;
    NODE *next;
  NODE(int val){
    data=val;
    next=NULL;
    
}
};

class list {
    public:
    NODE *head;
    NODE *tail;
    
    list(){
        head=tail=NULL;
    }
    
    void push_front(int val){
        NODE *temp=new NODE(val);
        
        if(head==NULL){
            head=tail=temp;
        }
        else{
            temp->next=head;
            head=temp;
        }
    }
    
    void display(){
        NODE *temp= head;
        
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
    }
    
    void reverse(){
        NODE *prev=NULL;
         NODE *curr=head;
          NODE *next=NULL;
          
          while(curr!=NULL){
              next=curr->next;
              // firstly store the next elments address before updating curr otherwise it will be lost
              
              
              curr->next=prev;
              // now reverese the bond from next to previous;
              
              prev=curr;
              // update prev element to next one 
              
             curr=next;
              //now update the curr to next element
              
          }
        tail=head; 
        head=prev;
        // as list is reversed
    }
};

int main(){
    list ll;
      ll.push_front(1);
      ll.push_front(2);
      ll.push_front(3); 
      ll.push_front(4);
      ll.push_front(5);
      ll.push_front(6);
      
      
    ll.display();
    cout<<endl;
    
    ll.reverse();
    ll.display();
}