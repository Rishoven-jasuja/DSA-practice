#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node* prev;
    
    node(int val){
        data=val;
        next=prev=NULL;
    }
    
};
class doublylist{
    public:
    node* head;
    node* tail;
    
    doublylist(){
        head=tail=NULL;
        
    }
  
  void push_front(int val){
      node* temp=new node(val);
      
      if(head==NULL){
          head=tail=temp;
      }
      else{
          temp->next=head;
          head->prev=temp;
          head=temp;
      }
  }  
  void display(){
      node*temp=head;
      while(temp!=NULL){
          cout<<temp->data<<"->";
          temp=temp->next;
      }
  }
      
      void push_back(int val){
          node *temp=new node(val);
          if(head==NULL){
              head=tail=temp;
          }
          else{
              tail->next=temp;
              temp->prev=tail;
              tail=temp;
          }
      }

void pop_front(){
    node* temp=head;
    
    if(head==NULL){
        return ;
    }
    
    if(head==tail){
        head=tail=NULL;
        delete temp;
        // if it has only one node
    }
    else{
        head=temp->next;
        head->prev=NULL;
        temp->next=NULL;
        delete temp;
    }
}

void pop_back(){
    node* temp=tail;
    
    if(head==NULL){
        return;
    }
    if(head==tail){
        head=tail=NULL;
        delete temp;
    }
    else{
        tail=temp->prev;
        temp->prev=NULL;
        tail->next=NULL;
        delete temp;
        
    }
}
  
};

int main(){
    doublylist dll;
    dll.push_front(1);
    dll.push_front(2);
    dll.push_front(3);
    dll.push_front(4);
    dll.push_back(5);
    dll.push_back(6);
    dll.push_back(7);
    dll.display();
    cout<<endl;
    dll.pop_front();
    dll.pop_front();
    dll.display();
    cout<<endl;
    dll.pop_back();
    dll.pop_back();
    dll.display();
}
 