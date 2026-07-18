#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int a;
    int n = 0;
    int sum=0;
    cout << "Enter a number: ";
    cin >> a;
    while(a>0)
    {
        sum = sum + (a%2)*pow(10,n);
        a = a/2;
        n += 1;
    }
    cout << "The converted binary form is :" << sum ;
    return 0;
}