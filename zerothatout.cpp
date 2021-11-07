#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	vector<int>a;
	for (int i = 0; i < n; i++) {
		int j;
		cin >> j;
		if (j != 0) {
			a.push_back(j);
			}
		else if (j == 0) {
			a.erase(a.end() - 1);
			}
		}
	int l = a.size();
	int sum = 0;
	for (int i = 0; i < l; i++) {
		sum += a[i];
		}
	cout << sum;
	}
