#include <iostream>
using namespace std;
float volumeofpyramid(float length, float hight, float width, string unit);
main()
{
    float length, width, hight;
    string unit;
    cout << "Enter Length of pyramid(meters):";
    cin >> length;
    cout << "Enter width of pyramid(meters):";
    cin >> width;
    cout << "Enter hight of pyramid(meters):";
    cin >> hight;
    cout << "Enter the desired output unit(mm,cm,km):";
    cin >> unit;
    double answer = volumeofpyramid(length, hight, width, unit);
    cout << "Answer is:" << answer;
}
float volumeofpyramid(float length, float hight, float width, string unit)
{
    double pyramid_volume = 0.0;
    pyramid_volume = (length * width * hight) / 3;
    float vol_mm = pyramid_volume * 1000000000;
    double vol_cm = pyramid_volume * 1000000;
    float vol_km = pyramid_volume / 1000000000;
    if (unit == "mm")
    {

        return vol_mm;
    }
    if (unit == "cm")
    {

        return vol_cm;
    }
    if (unit == "km")
    {

        return vol_km;
    }
}