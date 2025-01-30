#include<iostream>
using namespace std;
struct student{
string  name;
int roll;
float percent;

};
void st(student students[],int c){
    cout<<"detail of class students\n";
 for(int i=0;i<c;i++){
    cout<<"student :"<<i+1 <<endl;
    cout<<"name  :"<<&students[i].name<<endl;
    cout<<"roll number  :"<<&students[i].roll<<endl;
        cout<<"cgpa  :"<<&students[i].percent<<endl;
        cout<<"..................................................\n";
 }
 
}
int  main(){
    int n=3;
    student students[n]= {
        { "Alice", 50000,12.4},
        {"Bob", 55000,34.2},
        { "Charlie", 60000,23.1}
    };

    cout<<"structure....................\n";
    
st(students,n);

    return 0;
}
