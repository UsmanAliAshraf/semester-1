#include<iostream>
using namespace std;
int main()
{
    // int n;
    int sum=0;
    // cout<<"Enter the natural numbers you want to add:";
    // cin>>n;
    int array[5]={1,2,3,4,5};
    for (int idx = 0; idx < 5; idx++)
    {
       sum=sum+array[idx];
       
    }
    int average = sum/5;
    cout<<"sum is:"<<sum<<endl;
    cout<<"Average is:"<<average<<endl;
    

return 0;
}