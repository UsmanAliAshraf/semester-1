#include <iostream>
using namespace std;
float taxcalculatorM(char price, float code);
float taxcalculatorE(char code, float price);
float taxcalculatorS(char code, float price);
float taxcalculatorV(char code, float price);
float taxcalculatorT(char code, float price);

float M;
float E;
float S;
float V;
float T;
float tax_amount;
float final_price;

main()

{
    float price, tax_rate;
    char code;
    cout << "Enter the price of vehicle:";
    cin >> price;
    cout << "Enter the Vehicle code:";
    cin >> code;
    M = taxcalculatorM(code, price);
    E = taxcalculatorE(code, price);
    S=taxcalculatorS(code,price);
    V=taxcalculatorV(code,price);
    T=taxcalculatorT(code,price);
     if (code == 'M' or 'm' )
    {
        cout << "The Final Price of a Vehicle of type M is:" << M;
    }
    if (code == 'E' or 'e')
    {
        cout << "The Final Price of a Vehicle of type E is:" << E;
    }
    if (code=='S' or 's')
    {
        cout<<"The Final Price of a Vehicle of type S is:" << S;
    }
    if (code=='V' or 'v')
    {
       cout<<"The Final Price of a Vehicle of type V is:" << V; 
    }
   if (code=='T' or 't')
   {
    cout<<"The Final Price of a Vehicle of type T is:" << T; 
   }
    
    
}
float taxcalculatorT(char code, float price)
{
    tax_amount=price*0.15;
    final_price=tax_amount+price;
    return final_price;
}

float taxcalculatorV(char code, float price)
{
tax_amount=price*0.12;
final_price=price+tax_amount;
return final_price;
}
float taxcalculatorS(char code, float price)
{ 
    tax_amount=price*0.1;
    final_price=price+tax_amount;
    return final_price;
}
float taxcalculatorE(char code, float price)
{
    tax_amount = price * 0.08;
    final_price = price + tax_amount;
    return final_price;
}

float taxcalculatorM(char code, float price)
{
    float tax_amount = price * 0.06;
    float final_price = price + tax_amount;
    return final_price;
}
