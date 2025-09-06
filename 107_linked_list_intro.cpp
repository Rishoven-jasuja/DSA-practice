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

class list{
    NODE * head;
    NODE * tail;
    
    public:
    list(){
        head=tail=NULL;
    }
    
    void push_front(int val ){
        // thus is a function which is used to add a new node at front  
        NODE *temp=new NODE(val);
        
        if(head == NULL){
            head=temp;
            tail=temp;
            return ;
            
        }
        else{
            temp-> next=head;
            head=temp;
        }
    }
    
    void print_ll(){
        
        // printing of linkedlist
        NODE *temp=head;
        while(temp!=NULL){
            cout<<temp->data<<"-> ";
            temp=temp->next;
        }
        cout<<endl;
        
    }
    void push_back(int val){
        NODE * temp=new NODE(val);
        
        if(head==NULL){
            head=temp;
            tail=temp;
            
        }
        else{
         tail -> next=temp;
         tail=temp;
       
        }
    }

void pop_front(){
    
    if(head==NULL){
        cout<<"the list is already empty"<<endl;
    }
    NODE *temp=head;
    
    head=temp->next;
    temp->next=NULL;
    
    delete temp;
}

void pop_back(){
    NODE *temp=head;
    // we have to start from first and go till last second node where next of next is null 
    
    if(head==NULL){
        return;
    }
    else{
        while(temp->next !=tail){
            temp=temp->next;
        }
        temp->next=NULL;
        delete tail;
        tail=temp;
    }
}

void insert(int val,int pos){
    NODE * new_node= new NODE(val);
    
    NODE * temp=head;
    
    if(pos<0){
        return ;
        
    }
    if(pos==0){
        push_front(val);
    }
    for(int i=0;i<pos-1;i++){
        
        if(temp==NULL){
            cout<<" invalid pos"<<" ";
        }
        temp=temp->next;
        // this will find the the node whose next node connection we have to break and alsp add a new one
        
    }
    
    new_node->next=temp->next;
    temp->next=new_node;
}

int search(int key){
    NODE * temp=head;
    int ans=-1;
    int idx=0;
    if(head==NULL){
        cout<<" the element is not present";
    }
    
    else{
        while(temp!=NULL){
            if(temp->data==key){
                ans=idx;
                break;
            }
            else{
                temp=temp->next;
                idx++;
            }
            
        }
        
    }
    return ans;
}
    
};

int main(){
   list ll;
   ll.push_front(1);
   ll.push_front(65);
   ll.push_front(68);
   
   ll.print_ll();
   
   ll.push_back(2);
    ll.push_back(6);
     ll.push_back(7);
    
    ll.print_ll();
    
    ll.pop_front();
    ll.print_ll(); 
    ll.pop_back();
    ll.print_ll();
    
    ll.insert(4,2);
    ll.insert(8,3);
    ll.print_ll();
    int ans =ll.search(8);
    
    
    if(ans !=-1){
        cout<<"yes the element is present at idx"<<ans<<endl;
    }
    else{
        cout<<" no element is not present ";
    }
    
    return 0;
}