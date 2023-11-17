#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of elements:";
    cin >> n;
    int array[n];
    
    for (int i = 0; i < n; i++)

    {
        cout << "Enter the element"<<i+1<<" : ";
        cin >> array[i];
    }
    for (int i = n - 1; i >= 0; i--)
    {
        cout << array[i];
    }

    return 0;
}