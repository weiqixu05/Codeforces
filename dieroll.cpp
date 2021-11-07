#include <bits/stdc++.h>
using namespace std;
int main() {
	int a, b;
	cin >> a >> b;
	int n = 6 - max(a, b) + 1;
	int x[7] = {0, 1, 1, 1, 2, 5, 1};
	int y[7] = {1, 6, 3, 2, 3, 6, 1};
	cout << x[n] << "/" << y[n];
	}
