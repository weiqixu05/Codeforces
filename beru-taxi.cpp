#include <bits/stdc++.h>
using namespace std;
int main() {
	double a;
	double b;
	int n;
	cin >> a >> b >> n;
	double c[n][3];
	for (int i = 0; i < n; i++) {
		cin >> c[i][0];
		cin >> c[i][1];
		cin >> c[i][2];
		}
		double ar[n];
		for (int i = 0; i < n; i++) {
			ar[n] = (fabs(c[i][0] - a) + fabs(c[i][1] - b))/c[i][2];
			}
		sort(ar, ar+n);
		cout << ar[n-1];
	}
