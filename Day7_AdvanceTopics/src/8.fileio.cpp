#include <fstream>
#include <iostream>

// int main(){
int fileio(){

    //// write data to a file
    std::ofstream output("data.txt");
    for(int i=0;i<10;i++){
        output << i * i << " ";
    }
    output << "\n";
    output.close();

    //// read file data
    std::ifstream input("data.txt");
    int data;
    while(input >> data){
        std::cout << data << " ";
    }
    std::cout<< std::endl;
    return 0;
}