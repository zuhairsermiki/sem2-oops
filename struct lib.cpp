#include<iostream>
using namespace std;
struct lib{
string bn;
int srn;
string wn;
int pubyr;
}b[5];
void show( int n){  
    cout<<"\n\n...................you enter the following books..............\n\n";
    for(int i=0;i<n;i++){
        cout<<"book :"<<i+1<<endl;
     cout<<"name of book :"<<b[i].bn<<endl;
      
     cout<<" serial number of book  :"<<b[i].srn<<endl;
     ; 
     cout<<"name of writer of  book  :"<<b[i].wn<<endl;
    
     cout<<"enter year of published of  book  :"<<b[i].pubyr<<endl; 
     cout<<"\n...............................................................................\n\n\n";
    }
}
void lab(){
    int  n =0;
    char p='y';
    for(int i=0;i<5 && p=='y';i++){
     cout<<"enter name of book you want to enter :";
     cin>>b[i].bn;   
     cout<<"enter serial number of book  :";
     cin>>b[i].srn; 
     cout<<"enter name of writer of  book  :";
     cin>>b[i].wn; 
     cout<<"enter year of published of  book  :";
     cin>>b[i].pubyr; 
     cout<<"do  want to enter another book :(y/n)";
     cin>>p;
     n++;
    }
    show(n);
}
int main(){
    cout<<"......................wellcome to our library managment system..................\n";
    lab();
    return 0;
}