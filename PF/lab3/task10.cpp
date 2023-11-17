#include <iostream>
using namespace std;
main()

{
	int wins, draw, loss;
	float points;
	string name;
	cout << "Enter the name of cricket team: ";
	
	cin >> name;
	cout << "Enter the number of wins: ";
	
	cin >> wins;
	cout << "Enter the number of draws: ";
	
	cin >> draw;
	cout << "Enter the number of losses: ";
	
	cin >> loss;
	
	points = (wins * 3) + (loses * 0) + (draws * 1);
	cout << name << " has obtained " << points << " points in the Asia Cup tournament.";
	
}