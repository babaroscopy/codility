#include<iostream>
#include<math.h>
#include<bitset>
using namespace std;
void powerset(char arr[], int size)
{
    int n= pow(2,size);
    for (int i=0;i<n;i++)
    {
        bitset<sizeof(int)> toBin(i);
        cout<<toBin<<"  ";
        for(int j=0;j<size;j++)
        {
            if(i & (1<<j))
            {
                cout<<arr[j];
            }
        }
    cout<<endl;
    }
}
int main()
{
char arr[]={'A','B','C','D'};
int size=sizeof(arr)/sizeof(arr[0]);
powerset(arr, size);
return 0;
}
