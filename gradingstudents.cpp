#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int n;
		cin >> n;
		if (n >= 38) {
			int z = 0;
			while(n%5 != 0) {
				z++;
				n++;
				}
				if (z < 3) {
					cout << n << "\n";
					}
				else {cout << n-z << "\n";}
			}
		else {cout << n << "\n";}
		}
	}
