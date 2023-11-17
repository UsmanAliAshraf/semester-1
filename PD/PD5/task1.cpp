#include<iostream>
using namespace std;
int x=10;
void abc()
{
cout<<"The value of X is:"<<x;
int x=20;
}
main()
{
abc();
int x=30;
cout<<"The value of the X is:"<<x;
abc();
}