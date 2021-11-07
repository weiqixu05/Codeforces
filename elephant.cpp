#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	int sum = 0;
	while (n > 0) {
		if (n > 4) {
			n -= 5;
			sum++;
			}
		else {n -= n;
			sum++;}
		}
		cout << sum;
	}
