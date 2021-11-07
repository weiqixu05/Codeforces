#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int k, n;
	cin >> k >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		}
	sort(a, a+n);
	int min = 2000;
	for (int i = 0; i < n-k+1; i++) {
		if(a[i+k-1]-a[i]<min) {
			min=a[i+k-1]-a[i];
			}
		}
	cout << min;
	}
