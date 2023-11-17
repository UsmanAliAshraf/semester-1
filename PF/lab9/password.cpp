#include<iostream>
#include<conio.h>

using namespace std;
bool ValidPassword(string pasword);
int main()
{
    
    cout<<"ENTER PASSWORD:";
    getline(cin,pass);
    bool answer=ValidPassword(pass);
   cout<<answer;
    
return 0;
}
bool ValidPassword(string pasword)
{
    int alphabets=0;
    int numbers=0;
    int special=0;
    bool answer=false;
    
    
    for (int idx = 0; pasword[idx]!=0; idx++)
    {
        int x=pasword[idx];
        if (x>=48 && x<58)
        {
            numbers++;
        }
        else if ((x>=65 && x<91) || (x>=97 && x<123))
        {
            alphabets++;
        }
        else
        {
            special++;
        }
    }
    if (!alphabets||!numbers||!special||pasword.length()<6)
    {
              answer=false;
    }
    else
    answer =true;
    return answer;
    
}