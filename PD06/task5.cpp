#include<iostream>
using namespace std;

float regular_service(char time,int minutes);
float pre_service(char time,int minutes);

main()
{
    char sc,tc;
    int mins;
cout<<"ENTER THE SERVICE CODE(R for regular and P for premiun):";
cin>>sc;
cout<<"ENTER THE NUMBER OF MINUTES USED:";
cin>>mins;

cout<<"Total minutes used="<<mins;
if (sc=='R' or sc=='r')
{
    float answer_R=regular_service(tc,mins);
    cout<<"Amount Due:"<<answer_R<<"$";
    return 0;
}
if (sc=='P' or 'p')
{
    cout<<"ENTER THE TIME OF CALL(D for day and N for Night):";
    cin>>tc;
    float answer_P=pre_service(tc,mins);
    cout<<"Amount Due:"<<answer_P<<"$";
    return 0;
}



}
float regular_service(char time,int minutes)
{
    float total; 
    if (minutes<=50)
    {
        total=10;
    }
    if (minutes>50)
    {
        minutes= minutes-50;
        total=10+(minutes*0.20);
    }
    return total;
}
float pre_service(char time,int minutes)
{
    float total1;
if ((time=='D' or 'd') and minutes<=75 )
{
    total1=25;
}
if ((time=='N' or 'n') and minutes<=100 )
{
     total1=25;
}
if ((time=='N' or 'n') and minutes>100 )
{
     total1=25+(minutes*0.05);
}
if ((time=='D' or 'd') and minutes>75 )
{
     total1=25+(minutes*0.10);
}
return total1;
}