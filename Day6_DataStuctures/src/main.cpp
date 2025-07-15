#include <iostream>
#include "singly_linkedlist.h"
#include "sorting_algos.h"

using namespace std;

void test_singly_linkedlist(){

    LinkedList L;

    // Test corner cases or errors
    // L.print_list();
    // L.delete_head(); // should throw an error 

    L.insert_head(0);
    L.insert_head(-1);
    L.insert_head(-2);

    // Test corner cases or errors
    // L.delete_position_p(10); // out of index, should throw an error
    // L.insert_position(3,10); // out of index, should throw an error

    // L.insert_tail(0);
    // L.insert_tail(1);
    // L.insert_tail(2);
    // L.insert_tail(3);

    // L.insert_head(-1);
    // L.insert_position(2,2);
    
    // L.print_list();

    // L.delete_head();
    // L.print_list();

    // L.delete_head();
    // L.print_list();

    // cout << "Deleting tail" << endl;
    // L.delete_tail();
    // L.print_list();

    // cout << "Deleting index 1" << endl;
    // L.delete_position_p(1);
    // L.print_list();

}

void test_sort_algos(){
    sorting_algos s(20);
    cout << "initial array" << endl;
    s.print_array();
    cout << endl;
    // s.selection_sort();
    // s.bubble_sort();
    s.insertion_sort();
    // s.merge_sort();
}



int main(){
/*  Test singly linkedlist */ 
    // test_singly_linkedlist();

    /*  Test selection sort */ 
    test_sort_algos();

    
    return 0;
}