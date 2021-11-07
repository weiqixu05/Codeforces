#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int a[n];
	int b = 0;
	int c = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if(a[i]>0) {
			b+=a[i];
			}
		else {c+=a[i];}
		}
	cout << b-c;
	}
