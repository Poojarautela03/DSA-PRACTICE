// Topic: OOP - Class & Object in C++
// Concepts Used: Constructor, Encapsulation, Getter & Setter
// Date: 22 Feb 2026
#include <iostream>
#include <string>
using namespace std;
class teacher{
    //properties
    private:
    double salary;
    public:
    teacher(){
        dept="aiml";//initialise
        cout<<"hi,i am constructor"<<endl;
    }
    string name;
    string dept;
    string subj;
   
    //methods
    void changeDept(string newdept){
        dept=newdept;
    }
    //setter:used to set value of private data member
    void setsalary(double s){
         salary=s;
    }
    //getter:used to get value of private data member
    double getsalary(){
        return salary;
    }
};
int main(){
    //class
    teacher t1;//constructor call
    teacher t2;//constructor call
    t1.name="john";
    //t1.dept="cs";
    t1.subj="oop";
   // t1.salary=50000;{not working as we set salary as private}
   t1.setsalary(25000);
   cout<<t2.dept<<endl;
   cout<<t1.name<<" "<<t1.dept<<" "<<t1.subj<<" "<<t1.getsalary()<<endl;
    return 0;
}

