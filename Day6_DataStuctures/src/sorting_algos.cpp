#include "sorting_algos.h"
#include <iostream>
#include <vector>

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

    cout << "Final sorted array using selection sort." << endl;
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

void merge(vector<int> &data, unsigned left, unsigned mid, unsigned right){

    unsigned elements_left = mid-left+1;
    vector<int> left_elements;
    // cout << "Left: [";
    for(unsigned i=0;i<elements_left;i++){
        left_elements.push_back(data[left+i]);
        // cout << left_elements[i] << " ";
    }

    // cout << "] ";

    unsigned elements_right = right-mid;
    vector<int> right_elements;
    // cout << "Right : [";
    for(unsigned i=0;i<elements_right;i++){
        right_elements.push_back(data[mid+1+i]);
        // cout << right_elements[i] << " ";
    }
    // cout << "] " << endl;

    unsigned i=0;
    unsigned j=0;
    unsigned pos = left;

    // check left and right list and pick the small from both unless one or both exceedes their index capacity.
    while((i< left_elements.size()) && (j < right_elements.size())){
        if(left_elements[i] <= right_elements[j]){
            data[pos] = left_elements[i];
            i++;
        }else{
            data[pos] = right_elements[j];
            j++;
        }
        pos++;
    }


    // add remaining data from left
    while(i<left_elements.size()){
        data[pos] = left_elements[i];
        i++;
        pos++;
    }

    // add remaining data from right
    while(j< right_elements.size()){
        data[pos] = right_elements[j];
        j++;
        pos++;
    }

}

void merge_sort_rec(vector<int> &data, unsigned left, unsigned right){

    if (left < right){
        int mid = (left + right)/2;

        merge_sort_rec(data, left, mid);
        merge_sort_rec(data, mid+1, right);

        merge(data, left, mid, right);
    }
}

void sorting_algos::merge_sort(){
    // divide and conquer
    /*

    [41 67 34 0 69 24]
    [41 67 34] [0 69 24]

    [41 67] [34] [0 69] [24]  <- max split either 1 or two elements
    [34 41 67]  [0 24 69]

    [0 24 34 41 67 69]

    */

    unsigned left = 0;
    unsigned right = array_size-1;

    vector<int> array_data_vec;

    for(int i=0;i<array_size;i++){
        array_data_vec.push_back(array_list[i]);
    }

    merge_sort_rec(array_data_vec,left,right);

    for(int i=0;i<array_size;i++){
        array_list[i] = array_data_vec[i];
    }

    print_array();
}