#include<iostream>
using namespace std;
main()
{
int no_of_sq_meters,width,height,no_of_walls;
cout<<"Number of square meters you can paint:";
cin>>no_of_sq_meters;
cout<<"Width of the single wall (in meters):";
cin>>width;
cout<<"height of the single wall (in meters):";
cin>>height;
 
no_of_walls=no_of_sq_meters/(width*height);

cout<<"Number of walls you can paint:"<<no_of_walls;

}