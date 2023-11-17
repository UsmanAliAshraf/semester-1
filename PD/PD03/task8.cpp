#include<iostream>
using namespace std;
main()
{

float veg_price;
float fruit_price;
float total_veg;
float total_fruit;
float total_earnings;
cout<<"Enter vegetable price per kg (in coins):";
cin>>veg_price;
cout<<"Enter fruit price per kg (in coins):";
cin>>fruit_price;
cout<<"Enter total kilograms for vegetables:";
cin>>total_veg;
cout<<"Enter total kilograms for fruits";
cin>>total_fruit;
float total_fruit_earning_in_coins=fruit_price*total_fruit;
float total_veg_earning_in_coins=veg_price*total_veg;
float total_earning_in_coins=total_fruit_earning_in_coins+total_veg_earning_in_coins;
total_earnings=total_earning_in_coins*1.94;
cout<<"Total earning in Rupees (RPS):"<<total_earnings;}