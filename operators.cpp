#include <iostream>
#include <cmath>
using namespace std;
int main() {
	double mealcost;
	double tip;
	double tax;
	cin >> mealcost >> tip >> tax;
	mealcost += (tip/100 * mealcost) + (tax/100 * mealcost);
	double cost = round(mealcost);
	cout << cost;
	}
