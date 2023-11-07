#include<iostream>
using namespace std;
float weekend_rates(string fruit,string weekday,float quantity);
float weekday_rates(string fruit,string weekday,float quantity);
main()
{
    string fruit,weekday;
    float quantity;
 cout<<"Enter fruit(banana,apple,orange,grapefruit,kiwi,pineapple,grapes):";
 cin>>fruit;
 cout<<"Enter day of week(eg. sunday,monday etc.):";
 cin>>weekday;
 cout<<"Enter the Quantity:";
 cin>>quantity;
    if (weekday=="sunday" or "saturday")
    {
        float answer1= weekend_rates(fruit,weekday,quantity);
       cout<< "The total price is:"<<answer1;
       return 0;
    }
    if (weekday=="monday" or "tuesday" or "wednesday" or "thursday" or "friday")
    {
        float answer2=weekday_rates(fruit,weekday,quantity);
        cout<< "The total price is:"<<answer2;
        return 0;
    }
    
   
}
float weekend_rates(string fruit,string weekday,float quantity)
{
    float price;
    if (fruit=="banana")
    {
        price =2.70*quantity;
    }
    if (fruit=="apple")
    {
        price =1.25* quantity;
    }
    if (fruit=="orange")
    {
        price =0.90*quantity;
    }
    if (fruit=="grapefruite")
    {
        price =1.60*quantity;
    }
    if (fruit=="kiwi")
    {
        price =3*quantity;
    }
    if (fruit=="pineapple")
    {
        price =5.60*quantity;
    }
    if (fruit=="grapes")
    {
        price =4.20*quantity;
    }
    return price; 
        
}
float weekday_rates(string fruit,string weekday,float quantity)
{
float price;
    if (fruit=="banana")
    {
        price =2.50*quantity;
    }
    if (fruit=="apple")
    {
        price =1.20* quantity;
    }
    if (fruit=="orange")
    {
        price =0.85*quantity;
    }
    if (fruit=="grapefruite")
    {
        price =1.45*quantity;
    }
    if (fruit=="kiwi")
    {
        price =(2.70*quantity);
    }
    if (fruit=="pineapple")
    {
        price =5.50*quantity;
    }
    if (fruit=="grapes")
    {
        price =3.85*quantity;
    }
    return price; 

}