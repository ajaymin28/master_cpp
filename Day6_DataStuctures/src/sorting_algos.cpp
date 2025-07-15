#include "sorting_algos.h"
#include <iostream>

using namespace std;


void sorting_algos::print_swap_elements(int idx1, int idx2){
    for(int i=0;i<array_size;i++){
        // cout << "idx[" << i << "]" << " = data[" << array_list[i] << "]" << endl;
        if(i==idx1 || i==idx2){
            cout << "<" << array_list[i] << "> ";
        }else{
            cout << array_list[i] << " ";
        } 
    }
    cout << endl;

}

void sorting_algos::print_array(){
    for(int i=0;i<array_size;i++){
        // cout << "idx[" << i << "]" << " = data[" << array_list[i] << "]" << endl;
        cout << array_list[i] << " ";
    }
    cout << endl;
}

void sorting_algos::init_random(){
    for(int i=0;i<array_size;i++){
        array_list[i] = rand() % 100;
    }
}

void sorting_algos::swap_elements(int *ele1, int *ele2){
    int temp = *ele1;
    *ele1 = *ele2;
    *ele2 = temp;
}

// selection sort
void sorting_algos::selection_sort(){
    int min_idx = 0;
    for(int i=0;i<array_size-1;i++){
        min_idx = i;

        for(int j=i+1;j<array_size;j++){
            if(array_list[j]<array_list[min_idx]){
                min_idx = j;
            }
        }
        print_swap_elements(i, min_idx);
        swap_elements(&array_list[i], &array_list[min_idx]);
    }

    cout << "Final sorted array " << endl;
    print_array();
}

void sorting_algos::bubble_sort(){
    for(int i=0;i<array_size-1;i++){
        for(int j=0;j<array_size-1-i ;j++){
            if(array_list[j]>array_list[j+1]){
                print_swap_elements(j+1,j);
                swap_elements(&array_list[j], &array_list[j+1]);
            }
        }
    }
    cout << "Final sorted array " << endl;
    print_array();
}

void sorting_algos::insertion_sort(){

    int temp;
    int j;
    for(int i=1;i<array_size;i++){
        temp = array_list[i];
        j = i - 1;
        print_swap_elements(i,j);

        while(j>=0 && temp < array_list[j]){
            array_list[j+1] = array_list[j];
            j = j-1;
        }
        array_list[j+1] = temp;
        
        // print_array();
    }


    cout << "Final sorted array using insertion sort" << endl;
    print_array();

}

void sorting_algos::merge_sort(){
    // divide and conquer
    


}