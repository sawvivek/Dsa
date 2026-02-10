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
void change(Student s){
    s.name="Aditya";
}
void changer(Student &s){
    s.name="Aditya";
}
int main(){
    Student s("Vivek",33,90);
    cout<<s.name<<endl;
    // cout<<s.roll<<endl;
    // cout<<s.marks;
    Student* ptr =&s;
    changer(*ptr);
    cout<<s.name;
    return 0;
}