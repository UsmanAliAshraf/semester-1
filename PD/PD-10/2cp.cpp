#include<iostream>
using namespace std;
int main()
{
    int wordInString;
    
    cout<<"Enter number of words u want to enter in string: ";
    cin>>wordInString;
    string array[wordInString];
    for (int i = 0; i < wordInString; i++)
    {
        cout<<"Enter the word of string at position "<<i+1<<": "<<endl;
        cin>>array[i];
    }
    
    
return 0;
}