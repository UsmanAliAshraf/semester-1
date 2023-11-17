#include<iostream>
using namespace std;
main()
{int n,degrees;
cout<<"Enter the numbers of side of the plygon:";
cin>>n;
degrees=(n-2)*180;
cout<<"the sum of internal angles of a " <<n<< "-sided polygon is": " <<degrees;


}



#include<iostream>
using namespace std;
int main()
{
int number_of_minutes,frames_per_second,total_numbers_of_frames;
cout<<"Number of Minutes:";
cin>>number_of_minutes;
cout<<"Frames per Second:";
cin>>frames_per_second;
total_numbers_of_frames=60*number_of_minutes*frames_per_second;
cout<<"Total Number of Frames:"<<total_numbers_of_frames;
}


#include<iostream>
using namespace std;
main(){

float vi,a,t,vf;
cout<<"Enter Initial Velocity (m/s):";
cin>>vi;
cout<<"Enter Accelration(m/s^2):";
cin>>a;
cout<<"Enter Time(s):";
cin>>t;
vf=vi+a*t;
cout<<"Final Velocity (m/s):"<<vf;

}






#include<iostream>
using namespace std;
main(){
int ic, pc, chance;
cout<<"Enter Imposter Count:";
cin>>ic;
cout<<"Enter Player Count:";
cin>>pc;
chance=100*(ic/pc);
cout<<"Chance of being an imposter:"<<chance<<"%";
}




#include<iostream>
using namespace std;
int main()
{ 
string name;
int kg;
int days;
cout<<"Enter the Name of the Person:";
cin>>name;
cout<<"Enter the target weight to lose in kilogram:" ;
cin>>kg;

days=kg*15;


cout<<name<<" will need "<<days<<" days to lose "<<kg<<" kg weight by following the doctor's suggestions"; }




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




#include<iostream>
using namespace std;
main(){
int four_digit_number;
cout<<"Enter a 4-digit number:";
cin>>four_digit_number;
int var1=four_digit_number%10;
int var2= (four_digit_number/10)%10;
int var3=(four_digit_number/100)%10;
int var4=four_digit_number/1000;
int sum=var1+var2+var3+var4;
cout<<"sum:"<<sum;
}





#include <iostream>
using namespace std;
main(){
	cout << "Number 1: ";
	int number1;
	cin >> number1;
	cout << "Number 2: ";
	int number2;
	cin >> number2;
	cout << "Number 3: ";
	int number3;
	cin >> number3;
	cout << "Number 4: ";
	int number4;
	cin >> number4;
	cout << "Number 5: ";
	int number5;
	cin >> number5;
	cout << "Number 6: ";
	int number6;
	cin >> number6;
	cout << "Number 7: ";
	int number7;
	cin >> number7;
	cout << "Number 8: ";
	int number8;
	cin >> number8;
	cout << "Number 9: ";
	int number9;
	cin >> number9;
	cout << "Number 10: ";
	int number10;
	cin >> number10;
	cout << "Number 11: ";
	int number11;
	cin >> number11;
	cout << "Number 12: ";
	int number12;
	cin >> number12;
	cout << "Number 13: ";
	int number13;
	cin >> number13;
	cout << "Number 14: ";
	int number14;
	cin >> number14;
	cout << "Number 15: ";
	int number15;
	cin >> number15;
	float operation1 = number1 + number2 + number3 + number4 + number5;
	float operation2 = number6 * number7 * number8 * number9 * number10;
	float operation3 = number11 - number12 - number13 - number14 - number15;
	float operation5 = operation1 + operation2 - operation3;
	cout << "The final result is: " << operation5; 

}




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




#include<iostream>
using namespace std;
main()
{
int sum=0, input;
cout<<"Enter First Integer:";
cin>>input;
sum= sum+input;
cout<<"Ener Second Integer:";
cin>>input;
sum=sum+input;
cout<<"Enter Third Integer:";
cin>>input;
sum=sum+input;
cout<<"Enter Fourth Integer:";
cin>>input;
sum=sum+input;
cout<<"Enter Fifth Integer:";
cin>>input;
sum=sum+input;
cout<<"SUM IS:"<<sum;


}