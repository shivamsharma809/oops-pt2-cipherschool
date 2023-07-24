#include<iostream>
using namespace std;

// The vehicle is a base class 

class vehicle
{
    public:

    int number_typers;
    string name;
    int capacity;
    int mileage;

    public:

    void calculatemileage()
    {
        cout<<"The mileage is "<<mileage;     
    }
};

//Now i will inherit the features of the base class into the derived classes

class schoolBus: public vehicle
{
    string school_name;
    int number_holidays;

    public:

    void printname()
    {
       cout<<"hahaha "<<name;
    }
};

class car: public vehicle // Derived class car has inherited all the data from the base class vehicle.
{

public:

int number_airbags;
int ac_consumption;

public:

void printname()
{
    cout<<name;
}

};

class SUV: public car
{
    public:

    int Four_wheel_drive;

};

int main()
{
    
    car a;
    schoolBus b;

    a.name = "Suzuki";
    b.name = "Toyota";

    a.printname();
    cout<<endl;
    b.printname();
    
}




