#include<iostream>
using namespace std;
int main()
{
int number_of_minutes,frames_per_second,total_numbers_of_frames;
cout<<"Number of Minutes:";
cin>>number_of_minutes;
cout<<"Frames per Second:";
cin>>frames_per_second;
total_numbers_of_frames=60*number_of_minutes*frames_per_second;
cout<<"Total Number of Frames:"<<total_numbers_of_frames;
}