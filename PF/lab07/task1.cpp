#include<iostream>
using namespace std;
void printMultiplicationTable(int number, int upTo); 

main() 
{
    int number, upTo;

cout << "Enter a number: ";
cin >> number;

cout << "Enter the range for the multiplication table: ";
cin >> upTo;

printMultiplicationTable(number, upTo);

return 0;
}
void printMultiplicationTable(int number, int upTo) 
{
    for (int i = 1; i <= upTo; i++) {
    cout << number << " x " << i << " = " << (number * i) <<endl;
    }
}
