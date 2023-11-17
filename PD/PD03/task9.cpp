#include<iostream>
using namespace std;
main(){
int four_digit_number;
cout<<"Enter a 4-digit number:";
cin>>four_digit_number;
int var1=four_digit_number%10;
int var2= (four_digit_number/10)%10;
int var3=(four_digit_number/100)%10;
int var4=four_digit_number/1000;
int sum=var1+var2+var3+var4;
cout<<"sum:"<<sum;
}
