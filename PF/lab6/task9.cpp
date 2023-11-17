#include<iostream>
using namespace std;
 string personal_title(int age,string gender);
 
main()
{
    int age;
    string gender;
    cout<<"Enter Your Age:";
    cin>>age;
    cout<<"Enter your gender:";
    cin>>gender;
    string answer=personal_title(age,gender);
    cout<<"YOUR PERSONAL TITLE IS:"<<answer;
    return 0;
 
  

    
}
string personal_title(int age,string gender)
{   
    string title;
    if (age>=16 and gender=="male")
    {
        title="Mr.";
        
    }
    if (age<16 and gender=="male")
    {
        title="Master";
   
    }
    if (age<16 and gender=="female")
    {
     title=" Ms.";
     
    }
    if (age>=1816 and gender=="female")
    {
     title=" Miss";
     
    }
    return title;
}