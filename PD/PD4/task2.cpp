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