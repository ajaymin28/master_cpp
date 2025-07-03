#include "Vehicle.h"


using namespace std;

// int main(){
int polymorphism(){

    Car car1("ABC-1", 2025, "2 Doors");
    Car car2("BHOI", 2025, "4 Doors");

    // This will call the child method if overriden in class.
    cout << "Car 1 Desc: " << car1.getDecription() << endl;
    cout << "Car 2 Desc: " << car2.getDecription() << endl;

    Vehicle *v1 = &car1;
    Vehicle *v2 = &car2;

    /*
        // TODO: This should be added to a readme.md in github

        Depending on how getDecription() is defined in the base class like,

        1. virtual const string getDecription() const {return license + " from " + to_string(year);}
        2. const string getDecription() const {return license + " from " + to_string(year);}
        3. const string getDecription() const = 0

        case [1] v1->getDecription() 
            - Dynamic dispatch will happen and will look for derived definition of the method.
            - will call the child class i.e. Car.getDecription()

        case [2] v1->getDecription() 
            - will call the base class i.e. Vehicle.getDecription()

        case [3] the Car or child class will be forced to override getDecription()
            - And will eventually call the child class method.
            - This is called pure virtual or abstract function

        with pointer class we use '->' instead of '.'

    */
    cout << "Vehicle 1 Desc: " << v1->getDecription() << endl;
    cout << "Vehicle 2 Desc: " << v2->getDecription() << endl;


    return 0;
}