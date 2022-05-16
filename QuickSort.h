#ifndef QUICKSORT_H
#define QUICKSORT_H
#include "Sort.h"
#include <vector>

class QuickSort: public Sort{
    QuickSort();
    void exec(std::vector<int> &toSort, int, int);
    ~QuickSort();
    
    private:
        int Split(std::vector<int> &toSort, int, int, int);
};

#endif