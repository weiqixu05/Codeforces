#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	double a[n];
	double sum = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		sum+=a[i];
		}
	cout << sum/n;
	}
