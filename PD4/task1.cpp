#include<iostream>
using namespace std;
void Check_Equal(int number1, int number2);
main()
{	int number1, number2;
	cout << "Enter the first number: ";
	cin >> number1;
	cout << "Enter the second number: ";
	cin >> number2;

	Check_Equal(number1, number2);
}

void Check_Equal(int number1, int number2)
{	if( number1 == number2)
{	cout << "True";}
	else
{	cout << "False";}
}


#include<iostream>
using namespace std;
void Reverse(string input);
main()
{	string input;
	cout << "Enter 'true' or 'false': ";
	cin >> input;

	Reverse(input);
}

void Reverse(string input)
{	if(input == "true")
{	cout << "False";
}
	if(input == "false")
{	cout << "True";
}
}





#include<iostream>
using namespace std;
void Discount(string a, float d);

main()
{	string a;
	cout << "Enter the country's name: ";
	cin >> a;
	float d;
	cout << "Enter the ticket price in dollars: $";
	cin >> d;

	Discount(a, d);
}

void Discount(string a, float d)
{	if(a=="Pakistan")
	{	d= d-(d*0.05);
		cout << "Final ticket price after discount: $"<<d;
	}
	if(a=="Ireland")
	{	d=d-(d*0.1);
		cout << "Final ticket price after discount: $"<<d;
	}
	if(a=="India")
	{	d=d-(d*0.2);
		cout << "Final ticket price after discount: $"<<d;
	}
	if(a=="England")
	{	d=d-(d*0.3);
		cout << "Final ticket price after discount: $"<<d;
	}
	if(a=="Canada")
	{	d=d-(d*0.45);
		cout << "Final ticket price after discount: $"<<d;
	}
}





#include<iostream>
using namespace std;
void checkSpeedofcar(int speed_of_car);

main(){
	int speed_of_car;
	cout<< " Enter the Speed of car: ";
	cin >> speed_of_car;
	
	checkSpeedofcar(speed_of_car);
}

void checkSpeedofcar(int speed_of_car)
{	if(speed_of_car > 100)
	{	cout << "Halt... YOU WILL BE CHALLENGED!!!";
	}
	if(speed_of_car <= 100)
	{	cout << "Perfect! You're going good.";
	}
}





#include<iostream>
using namespace std;
void possible_Bonus(int num1, int num2);

main(){
	int num1;
	cout << "Your position: ";
	cin>> num1;
	int num2;
	cout << "Your friend position: ";
	cin >> num2;

	possible_Bonus(num1, num2);
}

void possible_Bonus(int num1, int num2)
{	if(num2-num1 <= 6)
	{	cout << "True";
	}
	else
	{	cout << "False";
}
}





#include<iostream>
using namespace std;
void longestTime(int firstnumber, int secondnumber);

main(){
	int num1, num2;
	cout << "Enter the number of hours: ";
	cin >> num1;
	cout << "Enter the number of minutes: ";
	cin >> num2;
	
	longestTime(num1,num2);
}

void longestTime(int firstnumber, int secondnumber)
{	if(firstnumber*60 < secondnumber)
	{cout <<"Answer:" secondnumber;
	}
	if(firstnumber*60 > secondnumber)
	{cout <<"Answer:" firstnumber;
	}
}





#include<iostream>
using namespace std;
void flowers_Shop(float red_Rose, float white_Rose, float tulips);

main(){
	float redRose, whiteRose, tulips;
	cout << "Red Rose: ";
	cin >> redRose;
	cout << "White Rose: ";
	cin >> whiteRose;
	cout << "Tulips: ";
	cin >> tulips;

	flowers_Shop(redRose,whiteRose,tulips);
}

void flowers_Shop(float red_Rose, float white_Rose, float tulips)
{	float original;
	original= red_Rose*2 + white_Rose*4.1 +tulips*2.5;
	cout << "Original Price: $"<<original<< endl;
	float d;
	if(original > 200)
	{	d=original-(original*0.2);
		cout << "Price after Discount: $"<< d;
	}
	if(original <= 200) 
	{	cout << "No discount applied.";
	}
}





#include<iostream>
using namespace std;
void tissueChecker(int num1, int num2);

main(){
	int n1,n2;
	cout << "Number of people in the household: ";
	cin >> n1;

	cout << "Number of rolls of TP: ";
	cin >> n2;

	tissueChecker(n1, n2);
}

void tissueChecker(int n1, int n2)
{	int daysremaining;
	daysremaining = (500 * n2)/(57 * n1);

	if(daysremaining >= 14)
{	cout << "Your TP will last " << daysremaining << " days, no need to panic!";
}
	if(daysremaining < 14)
{	cout << "Your TP will only last " << daysremaining << " days, buy more!";
}
}



