#include<bits/stdc++.h>
using namespace std;

class teacher {
    private:
        double salary;
        //now this is private attribute which is only accessible inside the class 
        
    public:
    //properties
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

}