#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	double s[n];
	for (int i = 0; i < n; i++) {
		cin >> s[i];
		}
	sort(s, s+n);
	vector<double>number;
	for (int i = 1; i < n-1; i++) {
		number.push_back(((s[i] - s[i-1])/2)+((s[i+1]-s[i])/2));
		}
	n=number.size();
	sort(number.begin(), number.end());
	cout << fixed << setprecision(1) << number[0];
	}
