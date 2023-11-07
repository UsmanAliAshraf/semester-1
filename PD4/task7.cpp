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