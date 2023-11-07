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