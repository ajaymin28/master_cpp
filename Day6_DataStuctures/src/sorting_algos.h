#ifndef SELECTION_SORT_H
#define SELECTION_SORT_H

class sorting_algos{
    private:
        int *array_list; 
        int array_size;

    public:
        ~sorting_algos() {
            delete[] array_list;
        }
        sorting_algos(const int size)
            : array_size(size)
        {
            array_list = new int[array_size];
            init_random();
        }
        
        void print_array();
        void print_swap_elements(int idx1, int idx2);
        void swap_elements(int *ele1, int *ele2);
        void init_random();

        void selection_sort();    
        void bubble_sort();    
        void insertion_sort();    
        void merge_sort();
};

#endif