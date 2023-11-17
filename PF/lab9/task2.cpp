#include<iostream>
using namespace std;
int main()
{
    
    int size;
    cout<<"Enter array size:";
    cin>>size;
    int numbers[size];
    for (int i = 0; i < size; i++)
    {
        
        
        cout<<"Enter the element on array index "<<i<<":";
        cin>>numbers[i];
        
       
    }
    cout<<"Your first number is:"<<numbers[0]<<endl;
    cout<<"Your last number is:"<<numbers[size-1]<<endl;
    

}