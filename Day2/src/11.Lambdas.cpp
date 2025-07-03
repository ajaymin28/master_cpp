#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

struct building{
    string name;
    int height;

    //Simple constructor
    building(string s, int h): name(s), height(h) {}
};

// int main(){
int lambdas(){

    // lambda without names
    [] {
        cout << "Hello Lambda" << endl;
    } ();
    cout << endl;

    // assign labda to a variable
    auto print_lambda = [] {
        cout << "Hello Lambda" << endl;
    };

    print_lambda();
    cout << endl;

    const string some_string("Some random string");

    // lambda with arguments
    auto param_lambda = [] (const string &s) -> double {
        cout << s << endl;
        return 123.456;
    };

    double some_num = param_lambda(some_string);

    int a=5;
    int b=10;

    cout << "a: " << a << " b: " << b << endl;
    cout << endl;

    // lambda scopes: a is read only, b can be modified.
    // auto capture_lambda = [=, &b]   = means all global variables passed but read only
    auto capture_lambda = [a, &b]{
        b++;
    };

    capture_lambda();

    cout << "a: " << a << " b: " << b << endl;
    cout << endl;


    vector<building> buildings{
        building("Swamikrupa", 100),
        building("Garuda", 400),
        building("PitruChaya", 50),
        building("MatruChaya", 80),
    };


    cout << "before short" << endl;
    for(const auto &b: buildings){
        cout << "Building name: " << b.name << " Building height: " << b.height << endl; 
    }
    cout << endl;


    // use lambda to create a sort rule
    auto sort_rule = [] (const building &b1, const building &b2) -> bool{
        return b1.height < b2.height;
    };

    // use sort from <algorithm>
    sort(buildings.begin(), buildings.end(), sort_rule);

    cout << "after short" << endl;
    for(const auto &b: buildings){
        cout << "Building name: " << b.name << " Building height: " << b.height << endl; 
    }
    cout << endl;


    return 0;
}