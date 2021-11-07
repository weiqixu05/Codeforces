#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		}
		int j = 0;
		int max = 0;
	for (int i = 1; i < n; i++) {
		if (a[i] >= a[i-1]) {
			j++;
			}
		if (a[i] < a[i-1]) {
			j = 0;
			}
		if (j >= max) {
			max = j;
			}
		}
		cout << max + 1;
	}
