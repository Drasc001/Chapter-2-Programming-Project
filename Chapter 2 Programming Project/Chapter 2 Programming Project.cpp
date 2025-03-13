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

int main()
{
    std::cout << "Hello World!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
