#include<iostream>
using namespace std;
class base{
    public:
    base(){
        cout<<"base constructer called\n";
    }
int a;
virtual void abc(){
    cout<<" from base a is :"<<a<<endl;
}
~base(){
    cout<<"  base distructer called \n";
}
};
class derived1:public base{
    public:
    int b;
    derived1(){
        cout<<"derived 1 constructer called\n";
    }
    void abc(){
        cout<<b<<endl;
        cout<<" from derived1 ab is :"<<a*b<<endl;
    }
    ~derived1(){
        cout<<"derived 1 distructer called\n";
    }
};

int main(){
    base *b;
    base objbase;
    derived1 *c;
    derived1 objderived;
    b->a=140;
    c->b=15;
     b->abc();
     cout<<endl;
     cout<<"..................\n";
     c->abc();
    // derived1 d;
    // base* b;
    // b=new derived1;
    //  b->abc();
    //  delete b;
    return 0;
}