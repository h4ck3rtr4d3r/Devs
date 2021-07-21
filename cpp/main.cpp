/*
    Project 1-1
    This program converts feet to meters
*/

#include<iostream>

int main()
{
    double f;       // holds the length in feet
    double m;       // holds the conversion to meters

    std::cout << "Enter the length in feet: ";
    std::cin >> f;      // read the number of feet

    m = f / 3.28;       // convert to meters
    std::cout << " feet is " << m << "meters.";

    return 0;
    
}