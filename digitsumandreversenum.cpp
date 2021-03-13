#include <iostream>
using namespace std;

int sumdigits(int n)
{
    int sum = 0;
    while (n != 0) {
        sum = sum + n % 10;
        n = n / 10;
    }
    return sum;
}
int reverse(int n)
{
    int rev = 0;
    while (n != 0) {
        rev = (rev * 10) + (n % 10);
        n /= 10;
    }
    return rev;
}
int main()
{
    int num;
    cout<<"Enter number to obtain sum of digits and reverse"<<endl;
    cin>>num;
    cout<<"Sum of digits of "<<num<<" is "<< sumdigits(num)<<endl;
    cout<<"Reverse of "<<num<<" is "<< reverse(num)<<endl;
}
