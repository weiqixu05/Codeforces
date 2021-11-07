#include <iostream>
#include <cmath>
using namespace std;
int main () {
	int n;
	cin >> n;
	if (n % 2 != 0 || (n%2 == 0 && n > 5 && n < 21)) {
		cout << "Weird";
		}
	else {cout << "Not Weird";}
	}
