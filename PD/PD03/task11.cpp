#include<iostream>
using namespace std;
main()
{
int age, moves;
cout<<"Enter the person's age:";
cin>>age;
cout<<"Enter the number of times the've moved:";
cin>>moves;
int avg_years_lived=age/(moves+1);
cout<<"avg year lived:"<<avg_years_lived;
}