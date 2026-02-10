#include<iostream>
using namespace std;
class A{
    private:
    int a_ka_private;
    protected :
    int a_ka_protected;
    public:
    int a_ka_public;

};

class B: public A{
    public:
    int b_ka_public;
};

class C: public B{
    public:
    int c_ka_public;
};

class D: public B, public C{
    public:
    int d_ka_public;
};
int main(){
    
    return 0;
}