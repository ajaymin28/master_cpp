
#ifndef SINGLY_LINKEDLIST_H
#define SINGLY_LINKEDLIST_H

#include <iostream>

// Node Strcuct
// Data and pointer to the next node.
struct Node{
    int data;
    Node *next;

    Node(int d){
        data = d;
        next = NULL;
    }
};

class LinkedList{
    private:
        // Pointer to the list head
        Node *head;
    public:
        // Simple constructor with NULL head pointer
        LinkedList(){
            head = NULL;
        }

        // Add node with data 'd' at head position
        void insert_head(int d);
        // insert data 'd' at position p
        void insert_position(int d, int p);
        // insert data 'd' at tail
        void insert_tail(int d);

        // Delete head
        void delete_head();
        // Delete node a position p
        void delete_position_p(int p);
        // Delete node at tail
        void delete_tail();

        // Print out the list
        void print_list();

};

#endif