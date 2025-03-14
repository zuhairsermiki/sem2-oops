#include<iostream>
using namespace std;
class base{
    int i;
    char c;
    string s;
    public :
    void display(){
        cout<<"int :"<<i<<endl;
        cout<<"char :"<<c<<endl;
        cout<<"string :"<<s<<endl;
    }

    base(int i,char c,string s){
        cout<<"base(int i,char c,string s)\n";
        this->i=i;
        this->c=c;
        this->s=s;
     display();
          
    }
    base(base &b){
       cout<<"  base(base &b)\n";
        this->i=b.i;
        this->c=b.c;
        this->s=b.s;
       display();
    }
    ~base(){

        cout<<"base khaatam\n";
    }
};

class derived:public base{
public:
derived(int i,char c,string s):base(i,c,s){
    cout<<"distructed derived:";
    display();
    cout<<"base class ma hu ma \n";
    base(i,c,s);
    cout<<"yang las chik ju\n ";
// while (i>0){
//     derived f(i-1,c,s);
// }

}
~derived(){
    cout<<"khataam ha sab\n";
  
    
}
};
int main(){
    base b(1,'c',"zuhair");
    cout<<"................\n";
   base q(b);
   cout<<"................\n";
   derived d(2,'d',"hussaon");
    return 0;
}