#include<iostream>
using namespace std;
class base{
    public:

  
    virtual void mase(){
        cout<<"abc\n";
    }
};
class derived:private base{
public:

   void mase() override {
      cout<<"ali\n";
    }
};
int main(){
    cout<<"override and virtual function\n";
    derived d;
    d.mase();
    base b;
    b.mase();

    return 0;
}