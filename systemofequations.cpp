#include <bits/stdc++.h>
using namespace std;
int main() {
	int n, m;
	cin >> n >> m;
	int tally = 0;
	int total = 0;
	while (pow(tally, 2) <= n) {
		int a = tally;
		int b = n-(pow(tally, 2));
		if (pow(a, 2) + b == n && pow(b, 2) + a == m) {
			total++;
			}
		tally++;
		}
	cout << total;
	}
