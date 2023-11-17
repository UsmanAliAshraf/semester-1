#include<iostream>
using namespace std;
int main()
{
    string str;
    cout<<"Enter a string:";
    getline(cin, str);
    int x=str.length();
    for (int i=0;i<x;i++)
    {
    
    
    char x=str[i];
    int ascii=x;
    if (ascii==91)
    {
        ascii=64;
    }
    if (ascii==122)
    {
        ascii=96;
    }
    if (ascii==32)
    {
        ascii=31;
    }
    
    
    ascii++;

    char y=ascii;
    cout<<y;
    }
return 0;
}