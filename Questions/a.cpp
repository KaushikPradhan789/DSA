#include<iostream>
using namespace std;

int main() {
    char a ;
    cout << "Enter a character:";
    cin >> a;
    if (a >= 'A' && a <= 'Z') {
        cout << "The character is an uppercase letter." << endl;
    } else if (a >= 'a' && a <= 'z') {
        cout << "The character is a lowercase letter." << endl;
    } else if (a >= '0' && a <= '9') {
        cout << "The character is a number." << endl;
    } else {
        cout << "The character is a special character." << endl;
    }
}