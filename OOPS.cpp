#include<bits/stdc++.h>
using namespace std;

class teacher {
    private:
        double salary;
        //now this is private attribute which is only accessible inside the class 
        
    public:
    //properties
    teacher(){
        // non parameterized constructor
        cout<<"i am a constructor"<<endl;
    }
    // constructor is a special type of function which is used to initialize the object of the class
    // it is automatically called when the object of the class is created
    // its work is to allocate memory to the object of the class
    // it has same name as the class name


    teacher(string n, string d, string s, double sal){
        // parameterized constructor
        name=n;
        dept=d;
        subject=s;
        salary=sal;
    }

    ~teacher(){
        // destructor
        cout<<"i am a destructor"<<endl;
    }
    string name;
    string dept;
    string subject;
  
    // also called attributes
    // methods 
    void change_dept(string newdept){
        dept =newdept;
    }
    void set_salary(double s){
        salary=s;
        // this type of function is called setter function which is used to modify  the private data
        
    }
    double get_salary(){
        return salary;
        // this type of function is called getter function which is used to access the private data.
    }
};
int main(){
    teacher t1;
    // this way is used to initialize a new variable like new teacher 
    
    t1.name="rishu";
    
    t1.subject="OOPS";
    t1.dept="CSE";
    // providing value of salary
    t1.set_salary(346467);
    cout<<t1.name<<endl;
    cout<<t1.get_salary()<<endl;
    teacher t2("rj","ECE","DSA",45646);
    cout<<t2.name<<endl;
    
}