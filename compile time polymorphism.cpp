#include<iostream>
using namespace std;
class base{
  public:
void show(int x){
  cout<<"int \n";
}
void show(char x){
  cout<<"char \n";
}


};
int main(){
    
    base b;
    b.show('&');
    return 0;
}