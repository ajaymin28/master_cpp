#include <iostream>
#include <string>

using namespace std;

class Vehicle{

    protected:
        string license;
        int year;

    public:
        Vehicle(const string &myLicense, const int &myYear)
            : license(myLicense), year(myYear) {} // this runs before constructor body, directly assigned useful for const
        /*
        // Less ideal: Assigning in body (potentially less efficient)
        Vehicle(const string &myLicense, const int &myYear) {
            // license and year is first initialized and then assigned
            license = myLicense;
            year = myYear;
        }
        */
        
        /* The '&' avoids creating a copy when this function is called.*/
        const string &getLicense() const {return license;}
        const int &getYear() const {return year;}

        /* polymorphism is done but not forced, 
            if base class pointer is used, it will call the child method. 
        */
        virtual const string getDecription() const {return license + " from " + to_string(year);}
        
        /* 
            cant do polymorphism, if base class pointer is used with child class, 
            it will call the base class method. 
        */
        // const string getDecription() const {return license + " from " + to_string(year);}
        
        /* pure virtual or abstract function | Forces override in Child */
        // virtual const string getDecription() const = 0; 

};

class Car: public Vehicle{
    /* Inherit Vehicle to Car class */
    private:
        string style;
    
    public:
        Car(const string &myLicense, const int &myYear, const string myStyle)
            : Vehicle(myLicense,myYear), style(myStyle) {}

        const string &getStyle() const {return style;}
        
        // we can't do '&' to this fn since we cant return adress of license, year and style at the same time.
        const string getDecription() const {return license + " from " + to_string(year) + " with style " + style;}
        
};