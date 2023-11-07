#include<iostream>
using namespace std;
string findZodiacSign(int dob, string mob);
main()
{
    string mob;
    int dob;
cout<<"Enter the date of birth :";
cin>>dob;
cout<<"Enter the month of birth:(e.g january, february etc.):";
cin>>mob;
 string answer=findZodiacSign(dob ,mob);
cout<<"Your Zodaic Sign is:"<<answer;
}







string findZodiacSign(int dob,string mob)
{
    string zodaicsign;
    
 if (mob=="march")
 {
 if (dob>=1 and dob<=20)
 {
  zodaicsign="The Fishes"  ;
 }
 if (dob>20 and dob<30)
 {
    zodaicsign="The Ram"  ;
 }
 }


 
 if (mob=="january")
 {
    if (dob>=1 and dob<=19)
    {
        zodaicsign="THE GOAT";
    }

    if (dob>19 and dob<30)
    {
        zodaicsign="The Water Bearer";

    }
    
 }
 if (mob=="february")
 {
    if (dob>=1 and dob<=18)
    {
       zodaicsign="The Water Bearer";
    }
    if (dob>18 and dob<=30)
    {
          zodaicsign="The Fishes";
    }
}

if (mob=="april")
 {
    if (dob>=1 and dob<=19)
    {
       zodaicsign="The Ram";
    }
    if (dob>19 and dob<=30)
    {
          zodaicsign="The Bull";
    }
}
if (mob=="may")
 {
    if (dob>=1 and dob<=20)
    {
       zodaicsign="The Bull";
    }
    if (dob>20 and dob<=30)
    {
          zodaicsign="The Twins";
    }
}
if (mob=="june")
 {
    if (dob>=1 and dob<=20)
    {
       zodaicsign="The Twins";
    }
    if (dob>20 and dob<=30)
    {
          zodaicsign="The Crab";
    }
}
if (mob=="july")
 {
    if (dob>=1 and dob<=22)
    {
       zodaicsign="The Crab";
    }
    if (dob>22 and dob<=30)
    {
          zodaicsign="The Lion";
    }
}

if (mob=="august")
 {
    if (dob>=1 and dob<=22)
    {
       zodaicsign="The Lion";
    }
    if (dob>22 and dob<=30)
    {
          zodaicsign="The Virgin";
    }
}
if (mob=="september")
 {
    if (dob>=1 and dob<=22)
    {
       zodaicsign="The Virgin";
    }
    if (dob>23 and dob<=30)
    {
          zodaicsign="The Scales";
    }
}
if (mob=="October")
 {
    if (dob>=1 and dob<=22)
    {
       zodaicsign="The Scales";
    }
    if (dob>23 and dob<=30)
    {
          zodaicsign="The Scorpion";
    }
}
if (mob=="november")
 {
    if (dob>=1 and dob<=21)
    {
       zodaicsign="The Scorpion";
    }
    if (dob>21 and dob<=30)
    {
          zodaicsign="The Archer";
    }
}
if (mob=="december")
 {
    if (dob>=1 and dob<=21)
    {
       zodaicsign="The Archer";
    }
    if (dob>21 and dob<=30)
    {
          zodaicsign="The Goat";
    }
 return zodaicsign;
}
}