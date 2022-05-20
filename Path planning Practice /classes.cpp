#include<iostream>
 
using namespace std;

class Car {
    public: 
        string brand;
        string model;
        int year;
};

int main(){
    //Create an object of car

    Car carobj1;
    carobj1.brand ="new";
    carobj1.model= "X3";
    carobj1.year =1997;

    // Create another object of Car
    Car carObj2;
    carObj2.brand = "Ford";
    carObj2.model = "Mustang";
    carObj2.year = 1969;

     // Print attribute values
    cout << carobj1.brand << " " << carobj1.model << " " << carobj1.year << "\n";
    cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";
    return 0;

};

