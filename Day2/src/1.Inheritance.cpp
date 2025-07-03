#include "Vehicle.h"


using namespace std;

// int main(){
int Inheritance(){

    Car car1("ABC-1", 2025, "2 Doors");
    Car car2("BHOI", 2025, "4 Doors");

    cout << "Car 1 License: " << car1.getLicense() << endl;
    cout << "Car 2 License: " << car2.getLicense() << endl;

    cout << "Car 1 Year: " << car1.getYear() << endl;
    cout << "Car 2 Year: " << car2.getYear() << endl;


    cout << "Car 1 Style: " << car1.getStyle() << endl;
    cout << "Car 2 Style: " << car2.getStyle() << endl;


    cout << "Car 1 Desc: " << car1.getDecription() << endl;
    cout << "Car 2 Desc: " << car2.getDecription() << endl;

    return 0;
}