#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	int on = 0;
	int max = 0;
	for (int i = 0; i < t; i++) {
		int a, b;
		cin >> a >> b;
		on -= a;
		on += b;
		if (on > max) {
			max = on;
			}
		}
		cout << max;
	}
