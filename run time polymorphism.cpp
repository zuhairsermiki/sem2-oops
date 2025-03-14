#include<iostream>
using namespace std;
class parent{
public:
virtual void show(){
    cout<<"parent class \n";
}
};
class child1:public parent{
    public:
    void show()override{
        cout<<" child1 class \n";
    }
};
class child2:public parent{
    public:
    void show()override{
        cout<<" child2 class \n";
    }
};
int main(){
    parent *d;
    child1 c1;
    child2 c2;
    d=&c1;
    d->show();
    d=&c2;
    d->show();


    
    return 0;
}