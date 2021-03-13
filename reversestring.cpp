#include <iostream>
#include <stack>
using namespace std;
void ReverseString(string &str)
{
   stack<char> st;
   for (int i=0; i<str.length(); i++)
       st.push(str[i]);

   for (int i=0; i<str.length(); i++) {
       str[i] = st.top();
       st.pop();
   }
}
int main()
{
    string str;
    cout<<"Enter string"<<endl;
    cin>>str;
    ReverseString(str);
    cout << str<<endl;
}
