#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int a[n][3];
	int sum = 0;
	for (int i = 0; i < n; i++) {
		for (int x = 0; x < 3 ; x++) {
			cin >> a[i][x];
				}
			if (a[i][0] + a[i][1] + a[i][2] > 1) {
				sum += 1;
				}
		}
	cout << sum;
	}
