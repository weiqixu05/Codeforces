#include <bits/stdc++.h>
using namespace std;
int main() {
	int n, a;
	cin >> n >> a;
	for (int i = 0; i < a; i++) {
		if (n%10 == 0) {
			n /= 10;
			}
		else {
			n -= 1;
			}
		}
		cout << n;
	}
