#include <iostream>
using namespace std;

int main() {
    int n;
    int duplicates = 0;

    cout << "Indicate number of integers: ";
    cin >> n;

    int ary[n];

    for (int i = 0; i < n; i++) {
        cout << "Enter a integer: ";
        cin >> ary[i];
    }

    sort(ary, ary+n);

    for (int i = 0; i < n-1; i++) {
        if (ary[i] == ary[i+1]) {
            duplicates++;
        }
        else {
            ary[i+1] = ary[i];
        }
    }

    cout << "\nTotal number of duplicates: " << duplicates << endl;  

    return 0;
}