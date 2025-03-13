// Chapter 2 Programming Project.cpp : The approximate number of customers in the survey purchasing one or more energy drinks per week.
// The approximate number of customers in the survey preferring citrus - flavored energy drinks.


#include <iostream>
using namespace std;

int main() {
    double surveyed = 16500; // Correcting the number format

    double PEdrinks = surveyed * 0.15;  // Correct calculation for 15% of customers

    double PreferCitrus = PEdrinks * 0.58;  // 58% of energy drink purchasers prefer citrus

    cout << "Out of 16500 customers approximately " << PEdrinks << " purchased one or more energy drinks per week.\n";
    cout << "Out of " << PEdrinks << " customers, approximately " << PreferCitrus << " prefer citrus-flavored energy drinks.\n";

    return 0;
}

