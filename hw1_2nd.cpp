#include <iostream>
using namespace std;

int main() {
    int n;
    int dupCount = 0;
    cout << "Indicate number of integers: ";
    cin >> n;

    int ary[n];

    for (int i = 0; i < n; i++) {
        cout << "Enter a integer: ";
        cin >> ary[i];
    }

    sort(ary, ary+n);

    int count = 0;
    int previous = -1; 
    for (int i=0; i < n; ++i) {
        if (ary[i] == previous)
            ++dupCount;
        else
            previous = ary[i];				
    }
    
    cout << dupCount << endl;

    return 0;

}