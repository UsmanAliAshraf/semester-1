#include<iostream>
using namespace std;
int main()
{   
        int no_of_saturdays,miles,sum=0;
        cout<<"Enter the number of saturdays:";
        cin>>no_of_saturdays;
        int array[no_of_saturdays];
        for (int i = 0; i < no_of_saturdays; i++)
        {
            cout<<"Enter the miles run for saturday " <<i+1<< ":";
            cin>>miles;
        }
        for (int j = 1; j < no_of_saturdays; j++)
        {
            if (array[j]>array[j-1])
            {
                sum++;
            }            
        }
        cout<<"Total progress days: "<<sum;
        
return 0;
}