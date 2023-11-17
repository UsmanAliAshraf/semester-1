#include <iostream>
using namespace std;
float TotalResistance(float array[], int size);
int main()
{
    int NumberOfResistors;
    cout << "Enter the number of resisitors used in circuit: ";
    cin >> NumberOfResistors;
    float array[NumberOfResistors];
    for (int i = 0; i < NumberOfResistors; i++)
    {
        cout << "Enter the resistance of Resistor " << i+1 << "(in ohms) :";
        cin >> array[i];
    }
    float ans = TotalResistance(array,NumberOfResistors);
    cout<<"The total resistance is "<<ans;
}
float TotalResistance(float array[], int size)
{
    float sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + array[i];
    }
    return sum;
}