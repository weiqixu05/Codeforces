#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int a[n];
	int t[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		t[a[i]-1]=i+1;
		}
	for (int i = 0; i < n; i++) {
		cout << t[i] << " ";
		}
	}
