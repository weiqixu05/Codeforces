#include <bits/stdc++.h>
using namespace std;
int main() {
	long long int a, b;
	cin >> a >> b;
	long long int n = 1;
	for (int i = 1; i <= min(a, b); i++) {
		n *= i;
		}
	cout << n;
	}
