#include<iostream>
using namespace std;
int main()
{
    int rowsize;
    cout<<"Enter Rowsize:";
    cin>>rowsize;
    
    for (int row = rowsize; row > 0; row--)
    {
        for (int col = 1; col <= row; col++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    

}