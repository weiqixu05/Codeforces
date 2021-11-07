#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;
int main() {
	int n;
	cin >> n;
	int a[n];
	double positive = 0.0;
	double negative = 0.0;
	double zero = 0.0;
	for (int i = 0; i < n; i++) {
		cin >> a[n];
		if (a[n] > 0) {
			positive += 1;
			}
		else if (a[n] < 0) {
			negative += 1;
			}
		else if (a[n] == 0) {
			zero += 1;
			}
	}
	cout << fixed << setprecision(6) << positive/n << endl;
	cout << fixed << setprecision(6) << negative/n << endl;
	cout << fixed << setprecision(6) << zero/n << endl;
	}
