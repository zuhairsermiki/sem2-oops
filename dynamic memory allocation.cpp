#include<iostream>
using namespace std;
union ju{
    int **lay=new int*[4];
  

}s;

void la(){

    for(int i=0;i<4;i++){

        for(int j=0;j<4;j++){
            cout<<"enter element at index ["<<i<<j<<"] ";
            cin>>s.lay[i][j];
        }
    }



}

int main(){
    cout<<"dynamic memory allocation\n";
    for (int i = 0; i < 4; i++) {
        s.lay[i] = new int[4];  
    }

   

   
la();
for(int i=0;i<4;i++){

    for(int j=0;j<4;j++){
        cout<<s.lay[i][j]<<" ";
    }
    cout<<endl;
}

    return 0;
}