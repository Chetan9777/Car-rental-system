#include<iostream>
#include<cstdlib>
using namespace std;

class locatiion
{  
    public:
    char pick[100];
    char drop[100];
};

class car: public locatiion     // Class Car
{
    public:
    int choice ,p , b , c , t , distance;
    void recommend ();
    int all_details();
    void enquiry();
    void rent();
    int brentals();
    int breserve();
    int bintercity();
    void bill();
    
    void show_cars()
    {
        cout<<" 1. Tata "<<endl;
        cout<<" 2. Tesla "<<endl;
        cout<<" 3. BMW "<<endl;
        cout<<" 4. Audi "<<endl;
        cout<<" 5. Lamborghini "<<endl;
        cout<<" 6. Rolls Royce "<<endl;
        cout<<" 7. Electric (Ola S1 , S1 pro) "<<endl;
    }
};

// class driver
// {
//     public : 
//     int age ;
//     char dname[100];
//     int phone_no;
    
// };

class customer     // Class customer inherited from Class car
{
    public :
    char cname[100];
    void login()
    {   
        char cname[100];
        int age;
        cout<<"||-------- Login Form --------||"<<endl<<endl;
        cout<<"  Enter your name : ";
        cin>>cname;
        try{
        string phone_no;
        cout<<"  Enter your mobile no. : ";
        cin>>phone_no;
        if(phone_no.size()!=10){
            throw phone_no;
        }
        }
        catch(string a){
            cout<<"\tEnter a valid mobile number\n";
            exit(0);
        }
        cout<<"  Enter your age : ";
        cin>>age;
    }
};

void car :: recommend()
{
    cout<<" Enter the number of passengers : ";
    cin>>p;
    cout<<" Enter the number of babies : ";
    cin>>b;
    cout<<endl;
    if (p>=1 && b>=1)
    {
        cout<<" We would recommend SUV , Sedan "<<endl;
        cout<<" Baby on the board "<<endl;
    }
    else if(p==1)
    {
        cout<<" We would recommend Bike"<<endl;
        
    }
    else if(p==2)
    {
        cout<<" We would recommend Auto"<<endl;
    }
    else
    {
        cout<<" We would recommend Prime Sedan , Prime SUV , Mini"<<endl;
    }
}

void car :: enquiry()
{
    cout<<" Get in touch "<<endl;
    cout<<" Call us at 9910010011 "<<endl;
    cout<<" Mail us at carrentalsys@gmail.com "<<endl;
    cout<<" Visit our website www.rentyurcar.com "<<endl;
}

void car :: rent()
{
    show_cars();
    cout<<" Enter your car choice : ";
    cin>>c;
    cout<<endl;
    
    switch(c)
    {
        case 1:
          cout<<" You have selected Tata "<<endl;
        
        case 2 :
          cout<<" You have selected Tesla "<<endl;
          break;
        
        case 3 :
          cout<<" You have selected BMW "<<endl;
          break;
          
        case 4 :
          cout<<" You have selected Audi "<<endl;
          break;
        
        case 5 :
          cout<<" You have selected Lamborghini "<<endl;
          break;
        
        case 6 :
          cout<<" You have selected Rolls Royce "<<endl;
          
        case 7 :
          cout<<" You have selected Electric (Ola S1 , S1 pro) "<<endl;
          
    }
    cout<<endl;
    
    cout<<" Enter your Pick-up location : ";
    cin>>pick;
    cout<<" Enter your Drop location : ";
    cin>>drop;
    cout<<endl;
    cout<<" 1. Rentals "<<endl;
    cout<<" 2. Reserve "<<endl;
    cout<<" 3. Intercity "<<endl;
    cout<<" Select your Type ";
    cin>>t;
    cout<<endl;
    switch(t)
    {
        case 1 :
          cout<<" You have selected Rentals "<<endl;
          break;
        case 2 :
          cout<<" You have selected Reserve "<<endl;
        //   breserve();
          break;
        case 3 :
          cout<<" You have selected Intercity "<<endl;
        //   bintercity();
          break;
    }
    
    bill();
    
}
void car :: bill()
{
    cout<<"Enter distance in Kms :";
    cin>>distance;
    if(distance<10)
    {
        cout<<" Tata will costs        : "<<distance*10<<endl;
        cout<<" Tesla will costs       : "<<distance*50<<endl;
        cout<<" Audi will costs        : "<<distance*20<<endl;
        cout<<" BMW will costs         : "<<distance*30<<endl;
        cout<<" Lamborghini will costs : "<<distance*40<<endl;
        cout<<" Rolls Royce will costs : "<<distance*70<<endl;
        cout<<" Electric will costs    : "<<distance*15<<endl;
    }
    
    else if( distance>10 && distance <100)
    {
        cout<<" Tata will costs        : "<<distance*12<<endl;
        cout<<" Tesla will costs       : "<<distance*52<<endl;
        cout<<" Audi will costs        : "<<distance*23<<endl;
        cout<<" BMW will costs         : "<<distance*34<<endl;
        cout<<" Lamborghini will costs : "<<distance*42<<endl;
        cout<<" Rolls Royce will costs : "<<distance*74<<endl;
        cout<<" Electric will costs    : "<<distance*18<<endl;
    }
    
    else 
    {
        cout<<" Tata will costs        : "<<distance*15<<endl;
        cout<<" Tesla will costs       : "<<distance*55<<endl;
        cout<<" Audi will costs        : "<<distance*25<<endl;
        cout<<" BMW will costs         : "<<distance*38<<endl;
        cout<<" Lamborghini will costs : "<<distance*45<<endl;
        cout<<" Rolls Royce will costs : "<<distance*78<<endl;
        cout<<" Electric will costs    : "<<distance*20<<endl;
    }
    
}
int car :: all_details()
{
    cout<<"*-------------------------------*"<<endl;
    cout<<"  Welcome to Car Rental System "<<endl;
    cout<<"*-------------------------------*"<<endl;
    
    
    cout<<" 1. Show all cars "<<endl;
    cout<<" 2. Car Enquiry "<<endl;
    cout<<" 3. Rent a car "<<endl;
    cout<<" 4. Our recommendation "<<endl;
    cout<<" 5. Exit "<<endl;
    cout<<" Enter your choice : ";
    cin>>choice;
    
    switch(choice)
    {
        case 1:
          show_cars();
          break;
        
        case 2 :
          enquiry();
          break;
        
        case 3 :
          rent();
          break;
          
        case 4 :
          recommend();
          break;
        
        case 5 :
          cout<<"Thank You for Visiting";
          break;
        
    }
    return choice;
    cout<<endl;
}
int main()
{
    car c;
    customer c1;
    c1.login();
    cout<<endl<<endl;
    while(c.all_details()!=5){
        c.all_details();
    }
    
    return 0;
    
}


