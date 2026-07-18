#include<iostream>
using namespace std;

int main() {
    int a,i=1;
    int sum = 0;
    cout << "How many odd numbers do you want to sum? ";
    cin >> a;
    while(i<=a){
        sum += i;
        cout << i << "\n";
        i += 2;
    }
    cout << "The sum is: " << sum << endl;
}