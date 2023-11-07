#include<iostream>
using namespace std;
int main()
{ 
string name;
int kg;
int days;
cout<<"Enter the Name of the Person:";
cin>>name;
cout<<"Enter the target weight to lose in kilogram:" ;
cin>>kg;

days=kg*15;


cout<<name<<" will need "<<days<<" days to lose "<<kg<<" kg weight by following the doctor's suggestions"; }