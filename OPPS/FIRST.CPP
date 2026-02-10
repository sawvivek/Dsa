#include<iostream>
using namespace std;
class Student{
private:
    int id;
    string name;
    string course;

    public:
    Student(int i,string n,string c){
        this->id=i;
        this->name=n;
        this->course=c;
    }
    void display(){
        cout<<id<<" "<<name;
    }
};
int main(){
    Student s(33,"vivek","cs");
    s.display();
}