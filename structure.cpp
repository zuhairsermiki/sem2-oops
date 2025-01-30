#include<iostream>
using namespace std;
struct name{

int a;
char b;
string  c;
}p,q;
int  main(){

    cout<<"structure....................\n";
    q.a=5;
    q.b='b';
    q.c="zuhair hussain sermiki";
    cout<<q.a<<endl;

p.a=4;
cout<<p.a<<"     "<<q.a;


    return 0;
}