#include<iostream>
using namespace std;
class su{
    int a;
    int b;
    int c;
    public:
    int  sh(){
        cout<<"show :\na :"<<a<<"\n b :"<<b<<"\n c :"<<c;
        return a*b*c;
    }
    void func(){
        cout<<" enter a:";
        cin>>a;
        cout<<"enter b: ";
        cin>>b;
        cout<<"enter c:";
        cin>>c;
        sh();
    }
//     int a;
//     char c;
//     string b;
//     void ib(){
//         cout <<"alaba\n ";
//     }
//     public:
//     void getib(){
//         return ib();
//     }
//    void setdata(int a1,char c1,string b1);
//    void getdata(){
//     cout<<"int a :"<<a<<endl;
//     cout<<"string  b :"<<b<<endl;
//     cout<<"character  c :"<<c<<endl;
//    }
}ba;
class b{
   
int a1=ba.sh();
public :
int  geta1(){
    return a1;
}
}ca;
// void su:: setdata(int a1,char c1,string b1){
//     a=a1;
//     b=b1;
//     c=c1;
// }
int main(){
//     su so;
//    so.getib();
//     so.setdata(1,'b',"zuhair hussain sermiki");
//     so.getdata();

ba.func();

cout<<"\nai= a*b*c ="<<ca.geta1();
    return 0;
}