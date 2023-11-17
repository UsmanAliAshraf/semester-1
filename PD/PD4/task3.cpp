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