#include<iostream>

using namespace std;
float calculate_average(float eng_marks,float maths_marks,float chm_marks,float bio_marks,float ss_marks);
string calculateGrade(float average);
int main()
{
    float eng_marks,maths_marks,chm_marks,bio_marks,ss_marks;
    string name;
 cout<<"Enter the name of student:";
 cin>> name;   
cout<<" ENTER THE MARKS IN ENGLISH(OUT OF 100):";
cin>>eng_marks;
cout<<" ENTER THE MARKS IN MATHS(OUT OF 100):";
cin>>maths_marks;
cout<<" ENTER THE MARKS IN CHEMISTRY(OUT OF 100):";
cin>>chm_marks;
cout<<" ENTER THE MARKS IN BIOLOGY(OUT OF 100):";
cin>>bio_marks;
cout<<" ENTER THE MARKS IN SOCIAL SCIENCES(OUT OF 100):";
cin>>ss_marks;
cout<<"NAME OF STUDENT:"<<name<<endl;
float avg= calculate_average(eng_marks,maths_marks,chm_marks,bio_marks,ss_marks);
cout<<"Percentage="<<avg<<"%"<<endl;
 string grade= calculateGrade(avg);
 cout<<"GRADE IS:"<<grade;
}
string calculateGrade(float average)
{
   string GRADE;
if (average>=90 and average<=100 )
{
    GRADE="A+" ;
    }
    if (average>=80 and average<90 )
{
   GRADE="A" ;
    }
    if (average>=70 and average<80 )
{
    GRADE="B+" ;
    }
    if (average>=60 and average<70 )
{
   GRADE="B" ;
    }
    if (average>=50 and average<60 )
{
    GRADE="C" ;
    }\
    if (average>=40 and average<50 )
{
    GRADE="D" ;
    }
    if (average<40 )
{
    GRADE="F" ;
    }

return GRADE;
}


float calculate_average(float eng_marks,float maths_marks,float chm_marks,float bio_marks,float ss_marks)
{
float average=(eng_marks+maths_marks+chm_marks+bio_marks+ss_marks)/5;
return average;
}