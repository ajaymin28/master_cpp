#include <iostream>
#include <map>
#include <string>

using namespace std;


int main(){
// int orderedmaps(){

    map<int, int> ordered_map;
    ordered_map[9] = 9 * 9;
    ordered_map[1] = 1 * 1;
    ordered_map[3] = 3 * 3;

    for(auto itr= ordered_map.begin(); itr!=ordered_map.end(); itr++){
        cout << "Key:" << itr->first << " Value:" << itr->second << endl;  
    }

    map<string, int> animals;

    string animal1 = "husky";
    string animal2 = "snake";
    string animal3 = "mouse";

    animals.insert(make_pair(animal1,10));
    animals.insert(make_pair(animal2,10));
    animals.insert(make_pair(animal3,10));

    for(auto itr= animals.begin(); itr!=animals.end(); itr++){
        cout << "Key:" << itr->first << " Value:" << itr->second << endl;  
    }


    return 0;
}