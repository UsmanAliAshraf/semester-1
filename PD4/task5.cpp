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