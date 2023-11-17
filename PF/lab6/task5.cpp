#include<iostream>
using namespace std;
string day,month;
float amount;
float discount(string,string,float);
 main()
{
    
cout<<" ENTER THE PURCHASE DAY:";
cin>>day;
cout<<" ENTER THE PURCHASE MONTH:";
cin >>month;
cout<<" ENTER THE PURCHASE AMOUNT:";
cin >>amount;
float answer=discount(day,month,amount);
cout<< "PAYABLE AMOUNT AFTER DISCOUNT IS:"<<answer;

}



float discount(string,string,float)
{
 float discount;
    if (day=="sunday" and month=="october")
    {
       discount=amount-(amount*0.1);
       return discount;
    }
    if (day=="sunday" and month!= "october")
    {
        discount= amount-(amount*0.05);
        return discount;
    }
    else
    {
        return amount;
    }
}
