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