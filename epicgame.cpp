#include <bits/stdc++.h>
using namespace std;
int main() {
	int a, b, n;
	cin >> a >> b >> n;
	while (n >= 0) {
		if (__gcd(a, n) <= n) {
			n -= __gcd(a, n);
			}
		else if (__gcd(a, n) > n) {
			cout << 1;
			break;
			}
		if (__gcd(b, n) <= n) {
			n -= __gcd(b, n);
			}
		else if (__gcd(a, n) > n) {
			cout << 0;
			break;
			}
		}
	}
