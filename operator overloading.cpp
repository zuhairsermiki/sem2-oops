#include<iostream>
using namespace std;
class complex{
    int real,imag;
    public:
    complex(int r=0,int i=0){
        real=r;
        imag=i;
    }
    void print(){
        cout<<real<<"+"<<imag<<endl;
    }
    complex operator +(complex c){
        complex temp;
        temp.real=real+c.real;
        temp.imag=imag+c.imag;
       return temp;
    }
    complex operator -(complex c){
        complex temp;
        temp.real=real*c.real;
        temp.imag=imag*c.imag;
        return temp;
    }
};
int main(){
    complex c1(2,4);

    complex c2(3,4);
    complex c3;
    c3=c2+c1;
   c3.print();
  
   c3=c2-c1;
   c3.print();
   complex c4;
   c4=c1+c2-c3;
   c4.print();
    return 0;
}