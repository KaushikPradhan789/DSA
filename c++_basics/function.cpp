#include<iostream>
using namespace std;

string kaushik(){                //Inside the brackets you can include some parameters.
    cout << "HELLO WORLD" << "\n" ; 
}

int sum (int a,int b){           // SUM OF TWO NUMBERS 
   int i = a+b;
   cout << "The sum is: "<< i << endl;
}

int min (int x,int y){           // MINIMUM OF TWO NUMBERS
    if(x<y)
    {
        cout << "The min of the two numbers is :" << x <<endl;
    }else
    {
        cout << "The min of the two numbers is :" << y <<endl;
    }
}

int sum1(int x){                 // SUM OF N NUMBERS THAT YOU WISH TO HAVE SUM OF
    int y = 0;
    for(int i=1;i<=x;i++)
    {
        int sum;
        cout << "Enter the " << i <<"'th number:";
        cin >> sum;
        y += sum;
    }
    cout << "The sum of the " << x << " numbers you've entered is: " << y;
}

int fact(int x){                      // FACTORIAL OF THE NUMBER
    int fact=1 ;
    for(int i=1;i<=x;i++){
        fact *= i;
    }
    return fact;
}

int sum2(int x,int y){           // SUM OF THE DIGITS OF THE NUMBER
    int sum=0;
    for(int i=0;i<y;i++)
{
    sum += x%10;
    x /= 10;
}
    cout << "The sum of the digits of the number is: " << sum;
}

int main(){
    int c,r;
    cout << "Enter the n for nCr :";
    cin >> c;
    cout << "Enter the r for nCr :";
    cin >> r;
    cout << "The value of nCr is: " << fact(c)/(fact(r)*fact(c-r)) << endl;
    }
    /*int a,b,x;
    cout << "Enter the first number:";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    sum(a,b);
    min(a,b);
    cout << "How many numbers do you want to get sum of ?" << "\n";
    cin >> x;
    sum1(x);
    fact();*/
    /*int x,y;
    cout << "How many digits are there in your number?" << "\n";
    cin >> y;
    cout << "Enter the number you want to find sum of digits of: "; 
    cin >> x;
    sum2(x,y);*/