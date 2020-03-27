#include <iostream>
#include <array>
using namespace std;

void Sort_N_Count(array <int, 12>, array <int, 12> *, int *);

int main() {
    array <int, 12> arr = {1, 5, 4, 8, 10, 2, 6, 9, 12, 11, 3, 7};
    array <int, 12> c;
    int inversions; 

    Sort_N_Count(arr, &c, &inversions); 

    for (int i = 0; i < arr.size(); i++) {
        cout << c[i] << ' ';
    }

    return 0;
}

void Sort_N_Count(array <int, 12> arr, array <int, 12> *c, int *inversions) {
    //int a[arr.length/2] = arr
    c = arr;
}

