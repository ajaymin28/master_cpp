#include <iostream>
#include <cctype>

using namespace std;


template <typename T>
class Container{
private:
    T element;

public:
    Container(const T e)
        : element(e) {}
    T inc() {return ++element;}
};


/*

Specilized Container for char type

template <> 
Container<char>{}

and

template <typename T> 
class Container{}

both are different 

*/
template<>
class Container<char>{
private:
    char element;
public:
    Container(const char e)
        : element(e) {}
    char uppercase() { return toupper(element);}
};

// int main(){
int TempleteClassesMultiImplementation(){

    Container<int> ic(5);
    Container<float> fc(6.8f);
    Container<char> ch('a');

    cout << "ic inc: " << ic.inc()<< endl;
    cout << "fc inc: " << fc.inc() << endl;
    cout << "ch toUpper: " << ch.uppercase() << endl;


    return 0;
}