#include<iostream>
using namespace std;
bool areSameNumber(int, int, int);

main()
{
    int n1,n2,n3;
    cout<<" Enter First Number:";
    cin>>n1;
    cout<<"Enter 2nd number:";
    cin>>n2;
    cout<<" Enter 3rd Number:";
    cin>>n3;
    cout<< areSameNumber(n1,n2,n3);
    
}
        bool areSameNumber(int n1, int n2, int n3)
{
    if ( (n1==n2) && (n2=n3) && (n1==n3))
    {
        return true;
    }
    else
{return false;}
    
}
