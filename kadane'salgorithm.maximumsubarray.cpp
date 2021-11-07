#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	int a[n];
	int m=0, prev=0;
	for(int i = 0; i < n; i++) {
		cin >> a[i];
		prev=max(a[i], a[i]+prev);
		m=max(m, prev);
		}
	cout << m;
	}
