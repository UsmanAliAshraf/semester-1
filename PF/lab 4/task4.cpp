#include<iostream>
using namespace std;
void add(int n1,int n2);
void minus(int n1,int n2);
void multiply(int n1,int n2);
void divide(int n1,int n2);
main(){

int n1, n2;
char opr;
cout<<"Enter 1st number:";
cin>>n1;
cout<<"Enter 2nd number:";
cin>>n2;
cout<<"Enter operator:";
cin>>opr;
	if(opr=='+')
add(n1,n2);

	if(opr=='-')
minus(n1,n2);

	if(opr=='*')
multiply(n1,n2);

	if(opr=='/')
divide(n1,n2);}

void add(int n1,int n2)
{
int sum=n1+n2;
cout<<sum;
}
void minus(int n1,int n2)
{
int subtract=n1-n2;
cout<<subtract;
}
void multiply(int n1,int n2)
{ 
int multi=n1*n2;
cout<<multi;
}
void divide(int n1,int n2)
{
int division=n1/n2;
cout<<multi;
}



