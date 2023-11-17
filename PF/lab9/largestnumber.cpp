#include <iostream>
using namespace std;
int FindLargestNumber(int array[], int size);
int main()
{
    int numOfElements;
    cout << "ENTER THE NUMBER OF ELEMENTS IN THE ARRAY :" << endl;
    cin >> numOfElements;
    int array[numOfElements];
    
    for (int i = 0; i < numOfElements; i++)
    {
        cout<<"Enter element "<<i+1<<" :";
        cin >> array[i];
    }
    int answer= FindLargestNumber(array,numOfElements);
    cout<<"The largest number is "<<answer;
}
int FindLargestNumber(int array[], int size)
{
    int LargestNum=array[0];
    for (int i = 1; i < size; i++)
    {
        
        if (array[i]>LargestNum)
        {LargestNum=array[i];}
    }
    return LargestNum;
}