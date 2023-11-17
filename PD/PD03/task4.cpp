#include<iostream>
using namespace std;
main(){
int ic, pc, chance;
cout<<"Enter Imposter Count:";
cin>>ic;
cout<<"Enter Player Count:";
cin>>pc;
chance=100*(ic/pc);
cout<<"Chance of being an imposter:"<<chance<<"%";
}