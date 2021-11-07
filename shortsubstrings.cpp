#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string a;
		cin >> a;
		for (int j = 0; j < a.size() - 2; j += 2) {
			cout << a[j];
			}
		cout << a[a.size()-2] << a[a.size()-1] << "\n";
		}
	}
