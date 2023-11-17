#include<iostream>
#include<conio.h>
using namespace std;
bool check(string str,char letter);
int main()
{
    string str;char letter;
    cout<<"Enter a string:";
    getline(cin,str);
    cout<<"Enter the letter u want to find:";
    cin>>letter;
    if (check(str,letter))
    {
        cout<<"Letter FOUND";
    }
    else
    {
        cout<<"Letter not found";
    }
    

}
bool check(string str,char letter)
{
    bool isFound=false;
    for (int i = 0; str[i] !='\0';  i++)
    {
        if (str[i]==letter)
        {
            isFound=true;
            break;
        }
        
    }
    return isFound;
}