#include<iostream>
using namespace std;
main(){
string name;
float matric,inter;
float aggregate,ecat;
cout<<"Enter your name...";
cin>>name;
cout<<"enter matric marks(out of 1100)...";
cin>>matric;
cout<<"enter inter marks(out of 1100)...";
cin>>inter;
cout<<"enter ECAT marks(out of 400)...";
cin>>ecat;
aggregate=(matric/1100*0.1+ecat/400*0.5+inter/1100*0.4)*100;

cout<<"aggregate of"<<name<<"is"<<aggregate;

}