#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int* rotation(int arr[], int rot, int siz)
{
    int temp;
    for(int i=0;i<rot;i++)
    {
        for(int j=siz-1;j>0;j--)
        {
            temp=arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=temp;
        }
    }
    return arr;
}

int main()
{
    int siz,rot;
    cout<<"Enter size of array"<<endl;
    cin>>siz;
    int* arr= new int[siz];
    cout<<"input values"<<endl;
    for(int i=0;i<siz;i++)
    {
        cin>>arr[i];
    }
    cout<<"enter rotations"<<endl;
    cin>>rot;
    int *ptr= rotation(arr,rot,siz);
    for(int i=0;i<siz;i++)
    {
        cout<<ptr[i]<<endl;
    }
}
