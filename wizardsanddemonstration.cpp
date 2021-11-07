#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	double n, x, y;
	cin >> n >> x >> y;
	double p = n*(y/100);
	double sum = 0;
	while (p>x) {
		sum++;
		x++;
		}
	cout << fixed << setprecision(0) << sum;
	}
