#include<iostream>
using namespace std;
void calculate_fuel(int distance);
main(){
int distance;
cout<<"Enter distance";
cin>>distance;
calculate_fuel(dis);
}
void calculate_fuel(int distance)
{
int fuel=distance*10;
cout<<"fuel="<<fuel;
}





#include<iostream>
using namespace std;
void inches_to_feet(float inches);
main(){
int in;
cout<<"Enter inches:";
cin>>in;
 inchestofeet(in);

}

void inchestofeet(float inches)
{
float feet=inches/12;
cout<<"value in feet is:"<<feet;


}




#include<iostream>
using namespace std;
void How_Many_Stickers(int num);
main()
{
int sideofcube;
cout<<"Enter the side length of Rubik's cube:";
cin>>sideofcube;
How_Many_Stickers(sideofcube);
}


void How_Many_Stickers(int num)
{
int sticker=nun*num*6;
cout<<"NUMBER OF sticker needed:"<<sticker;}




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









#include<iostream>
#include<cmath>
using namespace std;

void positive_Disc(float a, float b,float disc);
void equal_to_Zero(float a,float b, float disc);
void negative_Disc(float a,float b,float disc);

main()
{
	float a,b,c, discriminant;
	cout<<"Enter value of a: "; 
	cin>>a;

	cout<<"Enter value of b: ";
	cin>>b;

	cout<<"Enter value of c: ";
	cin>>c;

	discriminant= pow(b,2) - (4 * a* c);
	positive_Disc(a,b,discriminant);
	equal_to_Zero(a,b,discriminant);
	negative_Disc(a,b,discriminant);
}


void positive_Disc(float a, float b,float disc)
{
	if(disc > 0)
	{
		float root1, root2;
		root1 = (-b + sqrt(disc))/(2*a);
		root2 = (-b - sqrt(disc))/(2*a);
		cout<<"Solution: x = " <<root1 <<" and x= " <<root2;
	}
}

void equal_to_Zero(float a,float b, float disc)
{ 
	if(disc == 0)
	{
		float root;
		root=(-b/(2*a));
		cout<<"Solution = x " <<root;
	}
}

void negative_Disc(float a,float b,float disc)
{
	if(disc > 0)
	{ 
		float root1, root2;
		root1= (-b/(2*a));
		root2=(sqrt(-disc)/(2*a));
		cout<<"Complex Solution: x = "<<root1 <<"+" <<root2 <<"i and x = " <<root1 <<"-" <<root2 <<"i";
	}

}







#include<iostream>
using namespace std;
char checkAlphabetCase(char a);

main()
{
	char alphabet,result;
	cout<<"Enter a character (A/a): ";
	cin>>alphabet;
	result= checkAlphabetCase(alphabet);
	
}
char checkAlphabetCase(char a)
{
	char result;
 	if(a=='A')
	{
	
		cout<<"You have entered Capital "<< a;
	}
	if(a=='a')
	{
		
		cout<<"You have entered small "<< a;
	}
	return result;


}




#include<iostream>
using namespace std;
void IsSymmetrical(int num);

main()
{
	int num;
	cout<<"Enter a three-digit number: ";
	cin>> num;
	IsSymmetrical(num);
}

void IsSymmetrical(int num)
{
	int a, b;
	a= num/100;
	b= num%10;
	if(a==b){
		cout<<"The number is symmetrical.";}
	else {
		cout<<"The number is not symmetrical.";}
		




}




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