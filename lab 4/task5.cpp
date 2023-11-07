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


