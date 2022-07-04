#include <iostream>

using namespace std;

int swap(int &x, int &y)
{
    //swaping numbers without using extra variable
    /*
    A and B are two numbers.
    B=A+B;
    A=B-A;
    B=B-A;
    */
    y=x+y;
    x=y-x;
    y=y-x;
}

void main()
{
    int A,B;
    cout<<"Enter first number"<<endl;
    cin>>A;
    cout<<"Enter second number"<<endl;
    cin>>B;
    cout<<"Before Swap"<<endl;
    cout<<"A:   "<<A<<", B:   "<<B<<endl;
    swap(A, B);
    cout<<"After Swap"<<endl;
    cout<<"A:   "<<A<<", B:   "<<B<<endl;
}
