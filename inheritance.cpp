#include<iostream>
using namespace std;
class base{
    public:
  base(){
    cout<<"base constructer\n";

  }
  void abc(){
    cout<<"base function\n";
  }
  ~base(){
    cout<<" base distructer \n";
  }
};

class derived:public base{
  
  public:
  ~derived(){
    cout<<"distructor derived\n";
   }
   derived(){
    cout<<"constructor derived\n";
   }

};
class derived1 :public base,public derived{
  public :
  derived1(){
    cout<<"constructer derived 1\n";
  }
  ~derived1(){
    cout<<"distructor derived  1\n";
  }
};
int main(){
    base b;
    b.abc();
    cout<<endl;
    derived d;
    cout<<"\n ";
    derived1 c;
    cout<<"....................\n";
    derived1 f;
    b.abc();
    
    return 0;
}