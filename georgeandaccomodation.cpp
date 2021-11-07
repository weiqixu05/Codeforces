#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	int sum = 0;
	while (t--) {
		int a, b;
		cin >> a >> b;
		if((b-a) > 1) {
			sum++;
			}
		}
		cout << sum;
	}
