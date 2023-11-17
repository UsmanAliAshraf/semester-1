#include<iostream>
#include<conio.h>
using namespace std;
#include <cmath>
main(){
float hieght,angle,distance;
char press;
cout<<"Enter the distance from the tree:";
cin>>distance;
cout<<"Enter the angle of elevation:";
cin>>angle;
hieght=tan(angle)*distance;
cout<<"The height of tree is:"<<hieght;

}
 