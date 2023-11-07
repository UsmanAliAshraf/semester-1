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