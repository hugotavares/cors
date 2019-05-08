/**
 * g++ -std=c++0x insertion_sort_21.cpp -o insertion_sort_21
 *
 * Insertino-Sort, section 2.1., pp. 18.
 *  for j = 2 to A.length
 *      key = A[j]
 *      i = j - 1
 *      while i > 0 and A[i] > key
 *          A[i + 1] = A[i]
 *          i = i - 1
 *      A[i + 1] = key
 */
#include <iostream>

#define LIM 20

using namespace std;

int main() {
    int* list;
    int n;

    for(int i = 0; i < LIM; i++) {
        cin >> n;
        insertionSort(list, n);
    }

    return 0;
}


int* insertionSort(int* arr, int v) {
    int* res = arr;




    return res;
}