#include<iostream>
using namespace std;
main()
{
float size ;
float cost;
float area;
float costperpound;
float costpersquarefoot;
cout<<"Enter the size of the fertilizer bag in pounds:";
cin>>size;
cout<<"Enter the cost of the bag:";
cin>>cost;
cout<<"Enter the area in square foot that can be covered by the bag:";
cin>>area;

costperpound=cost/size;
costpersquarefoot=cost/area;
cout<<"cost of fertilizing per pound:"<<costperpound;
cout<<"cost of fertilizing per squarefoot:"<<costpersquarefoot;
}