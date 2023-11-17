#include<iostream>
using namespace std;
int main()
{
    int array1[2];
    cout<<"Enter two numbers for First array(one on each line) : ";
    for (int i = 0; i < 2; i++)
    {
        cin>>array1[i];
    }
    int n;
    cout<<"Enter the numbers of elements of second array: ";
    cin>>n;
    int array2[n];
    for (int j = 0; j < n; j++)
    {
        cout<<"Enter the value of number"<<j+1;
        cin>>array2[j];
    }
    
}