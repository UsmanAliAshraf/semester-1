#include<iostream>
using namespace std;
main()
{
string movie_name;
int adult_price;
int child_price;
int adult_sold;
int child_sold;
int percent_donated;
int total_amount;
float donation;
int remaining_amount;
cout<<"Enter the movie name:";
cin>>movie_name;
cout<<"Enter the adult ticket price:";
cin>>adult_price;
cout<<"Enter the child ticket price:";
cin>>child_price;
cout<<"Enter the number of adult tickets sold:";
cin>>adult_sold;
cout<<"Enter the number of child tickets sold:";
cin>>child_sold;
cout<<"Enter the percentage of the amount to be donated to charity:";
cin>>percent_donated;
int adult_total=adult_price*adult_sold;
int child_total=child_price*child_sold;
total_amount=adult_total+child_total;
cout<<"Total amount generated from ticket sale:"<<total_amount
<<endl;
donation=total_amount*(percent_donated*0.01);
cout<<"Donation to charity ("<<percent_donated<<"):"<<donation
<<endl;
remaining_amount=total_amount-donation;
cout<<"Remaining amount after donation:"<<remaining_amount;}
