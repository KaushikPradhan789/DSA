//CHECKING PRIME NUMBERS
#include<iostream>
using namespace std;

int main() {     
    int n;
    cout << "Enter a number: ";
    cin >> n;
    bool isPrime = true;
    /*for(int i=2;i<=(n-1);i++)   // Or it can be written as for(int i=2;i<=sqrt(n);i++) to reduce the number of iterations
    {
        if(n%i == 0 && n != 1)
        {
            isPrime = false;
            break;
        }
    }*/
   for(int i=2;i*i<=n;i++)
    {
        if(n%i == 0 && n != 1)
        {
            isPrime = false;
            break;
        }
    }
    if(isPrime == false && n != 1)
    {
        cout << n << " is not a prime number." << endl;
    }
    else if(isPrime == true || n==1)
    {
        cout << n << " is a prime number" << endl;
    }
}