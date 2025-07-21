#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;

// int main(){
int stringops(){

    string s("Hello String");
    cout << s << endl;

    // assignment
    string s2 = s;
    cout << s2 << endl;

    // concat
    string full = s + " " + s2;
    cout << full << endl;

    // access chars
    char ch = s[2]; // 0 indexed
    char safech = s.at(2); // 0 indexed
    cout << "ch: " << ch << endl;
    cout << "Safe ch: " << safech << endl;

    // length and empty
    size_t len_s = s.length();
    bool s_empty = s.empty();
    cout << "len of s: " << len_s << endl;
    cout << "s_empty: " << s_empty << endl;

    // substring and find
    size_t found_sub = s.find("String");
    cout << "found_sub: " << found_sub << endl;

    string substring = s.substr(found_sub,found_sub+6);
    cout << "substring: " << substring << endl;

    // insert, erase, replace
    s.insert(6, "World ");
    cout << "after insert : " << s << endl;

    s.erase(6, 6); // from 6th index erase 6 chars
    cout << "after erase : " << s << endl;

    s.replace(6,6, "World!"); // reaplce String with World!
    cout << "after replace : " << s << endl;

    // comparision
    if(s == "Hello World!"){
        cout << "Equality pass" << endl;
    }

    if(s.compare("Hello World!") == 0){
        cout << "lexicographical comparison pass" << endl;
    }
    cout << "S comapre count " << s.compare("Hello World!!") << endl; // one extra ! will give -1
    cout << "S comapre count " << s.compare("Hello World") << endl; // without ! will give 1


    // cpp to c and vice versa
    const char* cstr = s.c_str();
    cout << "CPP->C string: " << cstr << endl;

    string cppstr(cstr);
    cout << "C->CPP string: " << cppstr << endl;

    // parse string
    string stringdata = "100 200 300";
    stringstream ss(stringdata);
    int x,y,z;
    ss >> x >> y >> z;  
    cout << "x: " << x << " y: " << y << " z: " << z << endl;

    // looping chars
    for(char c:s ){
        cout << c << " ";
    }
    cout << endl;

    // transformations
    std::transform(s.begin(), s.end(), s.begin(), ::toupper);
    cout << "to upper transform: " << s << endl;

    std::transform(s.begin(), s.end(), s.begin(), ::tolower);
    cout << "to lower transform: " << s << endl;

    // string to num and vice versa
    int num = std::stoi("1234");
    double dnum = std::stod("12.34");
    float fnum = std::stof("12.34");
    cout << "Parsed int: " << num << endl;
    cout << "Parsed double: " << dnum << endl;
    cout << "Parsed float: " << fnum << endl;

    // number to string
    int inum = 12323;
    string strint = std::to_string(inum);
    cout << "int to string : " << strint << endl;
    

    // cout << "size of int " << sizeof(int) << endl; // 4 bytes 32 bits
    // cout << "size of size_t " << sizeof(size_t) << endl; // 8 bytes 64 bits

    return 0;
}