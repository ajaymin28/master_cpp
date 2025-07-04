
## General Notes

The '&' before function name avoids creating a variable copy when that function is called. 

```cpp
const string &getLicense() const {return license;}
```

we can't do '&' to below function since we cant return address of license, year and style at the same time.
```cpp
const string getDecription() const {return license + " from " + to_string(year) + " with style " + style;}
```

## Member initializer list
```cpp
class Vehicle{
    protected:
        string license;
        int year;
    public:
        Vehicle(const string &myLicense, const int &myYear)
            : license(myLicense), year(myYear) {} 
            // this runs before constructor body, directly assigned useful for const init
};
```


## 1.Inheritance

```cpp
class A{
    public:
        int methodA();
        virtual const int methodD();
};
class B: public A{
    public:
        const int methodB();
        const int methodD(); // method overloading/polymorphism
};
```



## 2.Polymorphism

In Vehicle (parent)class we define a getDecription() method, there are various way we can define this, below shows 3 ways. 

```cpp
//Case 1: polymorphism but not forced (dynamic dispatch)
virtual const string getDecription() const {return license + " from " + to_string(year);}

//Case 2: no polymorphism
const string getDecription() const {return license + " from " + to_string(year);}

//Case 3: pure virtual or abstract function, polymorphism/method overloading is forced for child class
const string getDecription() const = 0
```

Now the Car(a child class of Vehicle) is derived from Vehicle with getDecription() overloading.
```cpp

Car::getDecription() const {return license + " from " + to_string(year) + " with style " + style;}

Car car1("ABC-1", 2025, "2 Doors");
Vehicle *v1 = &car1; // Vehicle class pointer pointing to an instace of Car.

// with pointer class we use '->' instead of '.'
cout << "Vehicle 1 Desc: " << v1->getDecription() << endl;

```

v1->getDecription() output depends on how getDecription() is defined in Vehicle class.


- case [1] v1->getDecription() 
    - polymorphism but not forced
    - Dynamic dispatch will happen and will look for derived definition of the method.
    - will call the child class i.e. Car.getDecription()

- case [2] v1->getDecription() 
    - no polymorphism
    - will call the base class i.e. Vehicle.getDecription()

- case [3] v1->getDecription() 
    - polymorphism is forced in child class(Car) to override getDecription()
    - And will eventually call the child class method.
    - This is called pure virtual or abstract function