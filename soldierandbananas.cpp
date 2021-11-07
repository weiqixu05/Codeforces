#include <bits/stdc++.h>
using namespace std;
int main() {
	int w, k, n;
	cin >> k >> n >> w;
	int sum = 0;
	for(int i = 1; i < w + 1; i++) {
		sum += k*i;
		}
	int total;
	total = sum - n;
	if (total > 0) {
		cout << total;
		}
	else {cout << 0;}
	}
