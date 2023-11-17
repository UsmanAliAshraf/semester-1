#include<iostream>
using namespace std;
int findGreatest(int,int,int);
int a,b,c;
int main()

{
    
cout<<"Enter 1st number:";
cin>>a;
cout<<"Enter 2nd number:";
cin>>b;
cout<<"Enter third number:";
cin>>c;
int answer= findGreatest(a,b,c);

cout<< "The Greatest number is:"<<answer;
}


int findGreatest(int,int,int)
{

    if (a>b and a>c)
     {return a;}

    if (b>c and b>a)
     {return b;}
   
   if (c>a and c>b)
   {return c;}
   
   
    
        
    
}