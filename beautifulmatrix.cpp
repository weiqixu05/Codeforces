#include <iostream>
using namespace std;
int main() {
	int a[5][5];
	int c = 0;
	int r = 0;
	for (int i = 0; i < 5; i++) {
		for (int n = 0; n < 5; n++) {
			cin >> a[i][n];
			if (a[i][n] == 1) {
				r = i - 2;
				c = n - 2;
				if (r < 0) {
					r *= -1;
					}
				if (c < 0) {
					c *= -1;
					}
				}
			}
		
		}
		cout << c+r;
	}
