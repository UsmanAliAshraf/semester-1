#include<iostream> 
using namespace std;
int is_equal(int,int);
int a, b;
int main(){
    
    cout<<"Enter First Number:";
    cin>>a;
    cout<<"Enter 2nd number:";
    cin>>b;
    bool print=is_equal(a,b);
    cout<< print;

}
int is_equal(int, int)
{
    if (a>b)
    {
        bool result = true;
        return result;
    }
    else{
        bool result = false;
        return result;

    }
    
}