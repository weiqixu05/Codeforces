#include <bits/stdc++.h>
using namespace std;
int main() {
	string a, b;
	cin >> a >> b;
	int sum[a.size()];
	for (int i = 0; i < a.size(); i++) {
		if (a[i] == b[i]) {
			sum[i] = 0;
			}
		else {sum[i] = 1;}
		}
	for (int i = 0; i < a.size(); i++) {
		cout << sum[i];
		}
	}
