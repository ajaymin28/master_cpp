#include "singly_linkedlist.h"
#include <cassert>

using namespace std;

// insert node at head
void LinkedList::insert_head(int d){
    Node *new_head = new Node(d); // mem allocation

    // insert at the front of the list
    new_head->next = head;
    head = new_head;

    cout << "head insert with data: " << d << endl;
    print_list();
}

void LinkedList::insert_tail(int d){
    Node *new_node = new Node(d); // mem allocation

    if(head==NULL){
        head = new_node;
    }else{
        Node *current_node = head;
        while (current_node->next!=NULL){
            current_node = current_node->next;
        }
        current_node->next = new_node;
    }
    cout << "tails insert with data: " << d << endl;
    print_list();
}

// insert node at position p
void LinkedList::insert_position(int d, int p){
    Node *new_node = new Node(d); // mem allocation

    // check if head is NULL
    if(head==NULL){
        if(p==0){
            head = new_node;
        }else{
            assert(head== NULL && p==0);
        }

    }else{
        Node *temp = head;
        Node *prev = NULL;
        for(int i=0;i<p;i++){
            // let's say we want to insert at p=4

            // temp[0] -> [1] -> [2] -> [3] -> NULL, prev will be NULL at this point

            // assert temp is not None
            assert(temp!=NULL); // this will exit the loop if false and is the end of the list
            prev = temp;
            temp = temp->next; // becomes current node

            // [i=0] prev[0] -> temp[1] -> [2] -> [3] -> NULL
            // [i=1] [0] -> prev[1] -> temp[2] -> [3] -> NULL
            // [i=2] [0] -> [1] -> prev[2] -> temp[3] -> NULL
            // [i=3] [0] -> [1] -> [2] -> prev[3] -> temp=NULL  // temp->next becomes NULL
        }

        if(prev==NULL){
            // basically head is NULL at this point
            head = new_node;  // make new node as head
            head->next = temp; // make head next as NULL pointer
        }else{

            // [0] -> [1] -> [2] -> prev[3] -> new_node[4] -> NULL

            // we are at position 'p' 
            new_node->next = prev->next;  // make new node point to prev_next node
            prev->next = new_node; // set new node bet ween previous [pre and next]
        }


    }

    cout << "inserted at position p: "<< p << " with data: " << d << endl;
    print_list();

}

void LinkedList::delete_head(){
    Node *temp = head;
    assert(temp!=NULL);
    cout << "deleting head with data" << temp->data << endl;
    head = temp->next;
    delete temp;
    print_list();
}

void LinkedList::delete_tail(){
    Node *current = head;
    Node *prev = NULL;

    assert(current!=NULL);

    while(current->next!=NULL){
        prev = current;
        current = current->next;
    }
    cout << "deleting tail with data" << current->data << endl;
    prev->next = current->next;
    delete current;
    print_list();
}

void LinkedList::delete_position_p(int p){

    assert(head!=NULL); // head is not initialized or LinkedList is empty.

    Node *current = head;
    Node *prev = NULL;

    for(int i=0;i<p;i++){
        // what if p is greater than List size?
        assert(current!=NULL);
        prev = current;
        current = current->next;
    }

    int data_copy= current->data; // copy data before deleting for print purpose.

    if(current->next==NULL){
        //this is last element
        prev->next = current->next;
        delete current;
    }else{
        // not a last element, will need to link previous and next
        Node *next = current->next; // next from current
        prev->next = next; // previous from current is linked to next from current
        delete current;
    }

    cout << "deleting position " << p << " with data [" << data_copy << "]" << endl;
    print_list();
}


void LinkedList::print_list(){
    Node *current = head;
    if(current==NULL){
        cout << "LinkedList is empty" << endl;
    }else{

        Node *current = head;
        while (current->next!=NULL){
            cout << "[" << current->data << "]->";
            current = current->next;
        }
        cout << "[" << current->data << "]->" << "NULL" << endl;
    }
}