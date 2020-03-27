#include <iostream>
using namespace std;

int reverse(int n, int temp);
void checkPalindrome(int n, int rev);

int main() {
    //console space 
    cout << '\n';

    int n = 0;
    int temp = 0;
    int rev = 0;

    cout << "Enter a number: ";
    cin >> n;

    rev = reverse(ary[i], temp);
    checkPalindrome(ary[i], rev);

    return 0;
}
//Function to reverse order of number 
int reverse(int n, int temp) {
    if (n  == 0 ) {
        return temp;
    }

    temp = (temp * 10) + (n % 10);

    return reverse(n / 10, temp);
}
//Function to check if Palindrome or not

void checkPalindrome(int n, int rev) {
     cout << "\nPalindrome: ";
     if (n == rev) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
}
