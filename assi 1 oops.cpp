#include<iostream>
using namespace std;
#define CALCULATE_STOCK_VALUE
#define ENABLE_DISCOUNTS
#define GENERATE_SALES_REPORT

struct product{
int productID;
string name;
string category;
float price;
int stockQuantity;
float discount;
float revenueGenerated;

}p[1000];

#ifdef CALCULATE_STOCK_VALUE
void stockValue(int n,int &m){
     m= p[n].price*p[n].stockQuantity;
    cout<<p[n].name<<" - Total Stock value :"<<m<<endl;


}
#endif
#ifdef ENABLE_DISCOUNTS
#endif
#ifdef GENERATE_SALES_REPORT
#endif

void add(int count,int arr[]){
    int n;

    cout<<"Enter Product ID(000 to 999) : ";
    cin>>n;
    arr[count]=n;
    
    p[n].productID=n;
    cout<<"Enter Product Name: ";
    cin.ignore();
    getline(cin,p[n].name);
    cout<<"Enter Product Category: ";
    getline(cin,p[n].category);
    cout<<"Enter Product Price: ";
    cin>>p[n].price;
    cout<<"Enter Stock Quantity:";
    cin>>p[n].stockQuantity;
    #ifdef ENABLE_DISCOUNTS
    cout<<"Enter Discount Percentage: ";
    cin>>p[n].discount;
    #endif
    cout<<"Product Added Successfully!...\n\n ";



}
void show(int count,int arr[]){
    int n;
    cout<<"Enter Product ID : ";
    cin>>n;
    bool q=0;
    for(int i=0;i<=count;i++){
    if(n==arr[i]){
    q=1;
    cout<<"Product Details :";
    cout<<"product ID: "<<p[n].productID<<endl;
    cout<<"Name: "<<p[n].name<<endl;
    cout<<"Category: "<<p[n].category<<endl;
    cout<<"Price: "<<p[n].price<<endl;
    cout<<"Stock Quantity: "<<p[n].stockQuantity<<endl;
    #ifdef ENABLE_DISCOUNTS
    cout<<"Discount: "<<p[n].discount<<endl;
    #endif
    cout<<"Revenue Generated: "<<p[n].revenueGenerated<<endl;

            }
            
            
}
if(q!=1){
    cout<<"Search Not Found !\n try again\n\n ";
    show(count,arr);
}

}

void ms(){
    bool i=1;
    int count=5;
    
    while(i==1){
        cout<<"1.Add Product\n";
    cout<<"2.Display Product Details \n";
    #ifdef CALCULATE_STOCK_VALUE
    cout<<"3.Calculate Stock Value\n";
    #endif
    #ifdef ENABLE_DISCOUNTS
    cout<<"4.Apply Discount\n";
    #endif
    #ifdef GENERATE_SALES_REPORT
    cout<<"5.Generate Sales Report\n";
    #endif
    cout<<"6.exit ";
    cout<<"\nEnter Your Choice :";

    int n;
    cin>>n;
    
    int arr[count];
    if(n>0&&n<6){
      switch(n){

        case 1:
        cout<<"\n\n..........................................\n\n";
        add(count,arr);
        
        cout<<"\n\n..........................................\n\n";
        break;

        case 2:
        cout<<"\n\n..........................................\n\n";
        if(count>0){
        show(count,arr);
    }else{
            cout<<"No product is added yet \n";
        }
        cout<<"\n\n..........................................\n\n";

        break;


        #ifdef CALCULATE_STOCK_VALUE
        case 3:
        cout<<"\n\n..........................................\n\n";
        cout<<"Stock Value Calculation:";
        int sum;
        sum=0;
        int m;
        for(int i=0;i<count;i++){
            stockValue(arr[i],m);
            sum=sum+m;
            
        }
        cout<<"Total Stack of Inventry :"<<sum<<endl;
        cout<<"\n\n..........................................\n\n";
        break;
        #endif

        #ifdef ENABLE_DISCOUNTS
        case 4:
        cout<<"\n\n..........................................\n\n";
        cout<<"\n\n..........................................\n\n";
        break;
        #endif

        #ifdef GENERATE_SALES_REPORT
        case 5:
        cout<<"\n\n..........................................\n\n";
        cout<<"\n\n..........................................\n\n";
        break;
        #endif
       

      }
    }else if(n==6){
        cout<<"Exiting the Program .............Goodbye!";
        i=0;
    }else{
        cout<<"You Enter Wrong Credentials !";
       
    }
}
}

int main(){
    cout<<".............Product Inventry Management System......................\n";

    ms();
  

}