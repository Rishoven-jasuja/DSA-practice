#include<bits/stdc++.h>
using namespace std;
class person{
    public:
    string name;
    int age;

    person(string name,int age){
        this-> name=name;
        this-> age=age;
    }
    person(){
        cout<<"i am a constructor of person class and i will be called first"<<endl;
    }
};
class student :public person{
public:
student(){
    cout<<"i am a constructor of student class and i will be called second"<<endl;
}
int roll;
//student is child class and person is parent class
// student class is inheriting the properties of person class
//here we are not defining the name and age in student class but we can access it because student class is inheriting the properties of person class
void display(){
    cout<<name<<endl;
    cout<<age<<endl;
    cout<<roll<<endl;
}
student(string n,int a,int r):person(n,a){
    name=n;
    age=a;
    roll=r;
}
// this is parameterized constructor of student class which is calling the parameterized constructor of person class
};

class topper: public student{
    public:
    int marks;
    topper(){
        cout<<"i am a constructor of topper class and i will be called third"<<endl;
    }
    topper(string n,int a,int r,int m):student(n,a,r){
        name=n;
        age=a;
        roll=r;
        marks=m;
    }
    void display(){
        cout<<name<<endl;
        cout<<age<<endl;
        cout<<roll<<endl;
        cout<<marks<<endl;
    }
};

int main(){

    person p1("rishu",20);
    
    student s1;
    s1.roll =101;

    s1.display();
    
    topper t1("rj",19,102,500);
    
    t1.display();
   
   
    
}