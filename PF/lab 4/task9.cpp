#include<iostream>
using namespace std;

void time(int hours, int minutes);
main()
{
	int h, m;
	cout<<"Enter Hours: ";
	cin>>h;

	cout<<"Enter Minutes: ";
	cin>>m;

	time(h,m);
}
void time(int hours, int minutes)
{
	int hrs, mns, result;
	result = h*60 + m + 15;
	hrs = result/60;
	mns = result%60;
	cout<< hrs <<":"<< mns ;
}