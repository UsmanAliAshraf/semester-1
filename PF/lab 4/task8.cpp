#include<iostream>
using namespace std;
void OddOrEven(int num);

main()
{
	int number;
	cout<<"Enter a five digit number: ";
	cin>>number;
	OddOrEven(number);
	
}
void OddOrEven(int num)
{
	if (num%2==1)
		cout<<"Oddish";
 
	if(num%2==0)
		cout<<"Evenish";
}