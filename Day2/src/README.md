
## General Notes

The '&' before function name avoids creating a variable copy when that function is called. 

```
const string &getLicense() const {return license;}
```

we can't do '&' to below function since we cant return address of license, year and style at the same time.
```
const string getDecription() const {return license + " from " + to_string(year) + " with style " + style;}
```

## 1.Inheritance




## 2.Polymorphism

Depending on how getDecription() is defined in the base class like,

1. virtual const string getDecription() const {return license + " from " + to_string(year);}
2. const string getDecription() const {return license + " from " + to_string(year);} // no polymorphism
3. const string getDecription() const = 0 // pure virtual or abstract function, polymorphism is forced

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



```
Car car1("ABC-1", 2025, "2 Doors");
Vehicle *v1 = &car1;

// with pointer class we use '->' instead of '.'
cout << "Vehicle 1 Desc: " << v1->getDecription() << endl;

```