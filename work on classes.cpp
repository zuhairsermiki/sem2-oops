#include<iostream>
using namespace std;
class student{
int roll;
string name;
string cls;
string course;

public:
int getRoll() { return roll; }

 static student sr[100];
void abc(int r,string n,string c,string cr){
    
    sr[r].roll=r;
    sr[r].name=n;
    sr[r].cls=c;
    sr[r].course=cr;

}
void show(int r){
if(sr[r].roll!=0){
cout<<"student Roll number:"<<sr[r].roll<<endl;
cout<<" name :"<<sr[r].name<<endl;
cout<<"class :"<<sr[r].cls<<endl;
cout<<"course :"<<sr[r].course<<endl<<endl;
}
}
void dlt(int r){
   
    sr[r].roll=0;
    sr[r].name="";
    sr[r].cls="";
    sr[r].course="";
    cout<<"you deleted as data of student having roll number"<<r;

}


}s;
student student::sr[100];
void entry(int r){
    string n;
    string c;
    string cr;
    cout<<endl;
    cin.ignore();
    cout<<"enter name:";
    getline(cin,n);
    cout<<"enter class:";
    getline(cin,c);
    cout<<endl;
    cout<<"enter course name :";
    getline(cin,cr);
    cout<<endl;
    s.abc(r,n,c,cr);

}
void display(){
    int n;
    bool q;
   
while(true){
    cout<<"1.enter a student :\n2.delete student:\n3.Display all student detail \n4.search student\n 5.update student\n6.exit\n";
    cout<<"enter :";
    cin>>n;
  if(n>0&&n<=6){
    switch(n){
        case  1:
        do{
            q=1;
        cout<<"enter a new student :\n";
        int r;
        cout<<"enter roll number (1 to 99):";
        cin>>r;
    
        if(r<1||r>99){
            cout<<"please enter between 1 to 99 \ntry again\n";
    
            q=0;
           
        }else{

        
        
        entry(r);
    }
    }while(q==0);

        break;
        case  2:
        cout<<"enter roll number to delete a data of student\n";
        int r;
        cin>>r;
       
        if (student::sr[r].getRoll() != 0) {

        s.dlt(r);
        } else{
            cout<<"student not found:\n";
        }

        break;
        case  3:
        cout<<"all student details :\n";
        for(int i=0;i<100;i++){
            if (student::sr[i].getRoll() != 0) {
            s.show(i);
            }
        }
        break;
        case  4:
        cout<<"Search a student by Rol number \nenter a roll number of student :";
        int c;
        cin>>c;
        if (student::sr[c].getRoll() != 0) {
        s.show(c);
        }
        else{
            cout<<"student not found:\n";
        }


        break;
        case  5:
        cout<<"update a student :\n";
        cout<<"enter a roll number of student :";
        cin>>c;
        if (student::sr[c].getRoll() != 0) {
         cout<<"previous information: \n";
        s.show(c);
        cout<<".........................................\n";
        cout<<"update info of student :\n";
        entry(c);
        cout<<" after updation :\n";
        cout<<"..........................\n";
        s.show(c);
        }
        else{
            cout<<"student not found:\n";
        }


        break;
       default :
       return;


       }
   }else{
    cout<<"you enter wrong credentials \n try again\n";

    }
    cout<<"............................................\n";
}
}
int main(){
    cout<<"welcome to student management :\n";
    display();

    return 0;
}