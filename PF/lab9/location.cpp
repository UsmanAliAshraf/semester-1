#include<iostream>
using namespace std;
int main()
{
    string str;
    cout<<"Enter a string:";
    cin>>str;
    int x= str.length();
    for (int i = 0; i < x; i++)
    {
        cout<<str[i]<<" at position "<<i<<endl;
    }
    
return 0;
}