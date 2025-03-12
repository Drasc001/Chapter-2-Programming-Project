#include <iostream>
using namespace std;

int main() {
    // Define the number of surveyed customers
    double surveyed = 16500;

    // Calculate the number of customers who purchase energy drinks per week (15% of surveyed)
    double PEdrinks = surveyed * 0.15;

    // Calculate the number of customers who prefer citrus-flavored energy drinks (58% of energy drink buyers)
    double PreferCitrus = PEdrinks * 0.58;

    // Output the results
    cout << "Out of 16500 customers approximately " << PEdrinks << " purchased one or more energy drinks per week.\n";
    cout << "Out of " << PEdrinks << " customers, approximately " << PreferCitrus << " prefer citrus-flavored energy drinks.\n";

    return 0;  // Program executed successfully
}

