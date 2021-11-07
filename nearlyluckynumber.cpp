#include <bits/stdc++.h>
using namespace std;
int main() {
	string a;
	cin >> a;
	int sum = 0;
	for (int i = 0; i < a.size(); i++) {
		if (a[i] == '4' || a[i] == '7') {
			sum++;
			}
		}
	if (sum == 7 || sum == 4) {
		cout << "YES";
		}
	else {
		cout << "NO";
		}
	}
