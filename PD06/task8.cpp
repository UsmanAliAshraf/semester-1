#include <iostream>
#include <math.h>
using namespace std;
float calculateVolleyballGames(string yearType, float numberOfHolidays, float numberOfWeekends);
main(){
    string yearType;
    float numberOfHolidays, numberOfWeekends;
    cout <<"Enter year type: ";
    cin >> yearType;
    cout << "Enter number of holidays: ";
    cin >> numberOfHolidays;
    cout<<"Enter number of weekends: ";
    cin>>numberOfWeekends;
    cout <<calculateVolleyballGames(yearType, numberOfHolidays, numberOfWeekends);
}
float calculateVolleyballGames(string yearType, float numberOfHolidays, float numberOfWeekends){
    float volleyballGames;
    float weekendsNotWorking=(48*0.75);
    volleyballGames=weekendsNotWorking+((2/3)*numberOfHolidays);
    volleyballGames=round(volleyballGames);
    return volleyballGames;
}
