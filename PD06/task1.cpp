#include<iostream>
using namespace std;
main()
{
    string temp,humidity;
cout<<"Enter Temperature(warm or cold):";
cin>>temp;
cout<<"Enter Humidity(dry or humid):";
cin>>humidity;
if (temp=="warm" and humidity=="dry")
{
    cout<<"Recomended action: Play tennis. ";
}
if (temp=="warm" and humidity=="humid")
{
    cout<<"Recomended action: SWIM. ";
}

if (temp=="cold" and humidity=="humid")
{
    cout<<"Recomended action: WATCH TV. ";
}

if (temp=="cold" and humidity=="dry")
{
    cout<<"Recomended action: Plat Basketball. ";
}

}
