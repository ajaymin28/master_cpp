#include <iostream>

using namespace std;


template <typename T>
class Point{
private:
    T x;
    T y;

public:
    Point(const T u, const T v)
        : x(u), y(v) {}
    T getX() {return x;}
    T getY() {return y;}
};

// int main(){
int ClassTemplates(){

    Point<int> p1(1,2);  // can create cutom arrays, list, vectors etc. of different types
    Point<float> p2(1.4f,2.3f);
    // kind of args type overloadding but with templetes
    // input can be of any type, char, double, int 

    cout << "p1 x: " << p1.getX() << " y: " << p1.getY() << endl;
    cout << "p2 x: " << p2.getX() << " y: " << p2.getY() << endl;


    return 0;
}