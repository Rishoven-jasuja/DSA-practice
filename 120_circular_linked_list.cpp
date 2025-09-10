#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    
    node(int val){
        data=val;
        next=NULL;
        
    }
};

class circ_list{
    public:
    node*head;
    node*tail;
    circ_list(){
        head=tail=NULL;
        
    }
    void push_front(int val){
        node*temp= new node(val);
        if(head==NULL){
            head=tail=temp;
            tail->next=head;
            
        }
        else{
            temp->next=head;
            head=temp;
            tail->next=head;
            
            // if we dont want to use head then below code is used 
            
            // temp->next=tail->next;
            // tall->next=temp
        }
    }
    
    void print(){
        if(head==NULL) return ;
        
        // print the first element outside the loop
        cout<<head->data<<"->";
        node* temp=head->next;
        
        while(temp!=head){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"head"<<endl;
    }
    
    void push_back(int val){
        node* temp=new node(val);
        
        if(head==NULL){
            head=tail=temp;
            tail->next=temp;
        }
        else{
            tail->next=temp;
            temp->next=head;
            tail=temp;
        }
    }
    
    void pop_front(){
        node* temp=head;
        if(head==NULL) return ;
        
        else if(head==tail){
        delete head;
        head=tail=NULL;
        //this is the case when list has only one element;
        }
       else{
           head=head->next;
           temp->next=NULL;
           tail->next=head;
           delete temp;
           
       }
    }
    
    void pop_back(){
        node *temp=head;
        if(head==NULL){
            return ;
            
        }
        else if(head==tail){
            delete head;
            head=tail=NULL;
            
        }
        else{
            while(temp->next!=tail){
                temp=temp->next;
            }
            tail->next=NULL;
            temp->next=head;
            delete tail;
            tail=temp;
            
        }
    }
    
};
int main(){
    circ_list cll;
    cll.push_front(1);
    cll.push_front(2);
    cll.push_front(3);
    cll.print();
    cll.push_back(4);
    cll.push_back(5);
    cll.push_back(6);
    cll.print();
    cll.pop_front();
    cll.pop_front();
    cll.print();
    cll.pop_back();
    cll.push_front(78);
    cll.push_back(80);
    cll.print();
    
}