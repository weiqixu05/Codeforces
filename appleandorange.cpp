#include <bits/stdc++.h>
using namespace std;
int main() {
	int a, b, c, d, n, n2;
	cin >> a >> b >> c >> d >> n >> n2;
	int sum1 = 0;
	int sum2 = 0;
	for (int i = 0; i < n; i++) {
		int j;
		cin >> j;
		if (c+j >= a && c+j <= b) {
			sum1++;
			}
		}
	for (int i = 0; i < n2; i++) {
		int j;
		cin >> j;
		if (d+j >= a && d+j <= b) {
			sum2++;
			}
		}
		cout << sum1 << "\n" << sum2;
	}
