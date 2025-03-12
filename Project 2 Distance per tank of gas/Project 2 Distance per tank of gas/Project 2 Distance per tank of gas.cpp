// Calculates the distance per gas tank in town and on the highway for a 20-gallon tank


#include <iostream>
using namespace std;
int main() {

	double averagetanksize = 20;

	double milesintown = averagetanksize * 23.5;

	double milesonhighway = averagetanksize * 28.9;

	cout << "The distance you can drive in town with a 20 gallon gas tank is " << milesintown << " miles.\n";
	cout << "The distance you can drive on the highway with a 20 gallon gas tank is " << milesonhighway << " miles.\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu



