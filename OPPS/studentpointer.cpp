#include<iostream>
using namespace std;

class Student{
    public:
    string name;
    int roll;
    float marks;

    Student(string name, int roll, float marks){
        this->name=name;
        this->roll=roll;
        this->marks=marks;

    }
};
void change(Student* s){
    s->name="Rahul";
}
int main(){
    Student* s=new Student("Vivek",33,90);
    cout<<s->name<<endl;
    change(s);
    cout<<s->name<<endl; 
    return 0;
}