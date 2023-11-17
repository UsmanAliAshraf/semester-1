#include<iostream>
using namespace std;
bool isAlreadyEntered(char arr[], int size, char number);
int main()
{
    int n;
    cout<<"Enter number of elements of array: ";
    cin>>n;
    char array[n];
    cout<<"Enter the number 1: ";
    cin>>array[0];
    int i;
     for (i = 1; i <n; i++)
    {
        cout<<"Enter the number "<<i+1<<":";
        cin>>array[i];
        
    }
    if(isAlreadyEntered(array, n, array[i]))
        {
            cout<<"Already entered "<<array[i];
        }
        else{
            bool isFound=false;
            array[i];
        }
return 0;
}
bool isAlreadyEntered(char arr[], int size, char number)
{
    for (int i = 0; i < size; i++)
    {
       
        if(arr[i]==number)
        {
            return true;
        }
    }
    return false;

}
