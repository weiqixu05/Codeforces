#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int a[4];
	for (int i = 0; i < 4; i++) {
		cin >> a[i];
		}
	sort(a, a+4);
	if((a[3]>a[2]+a[1]) && (a[2]>a[1]+a[0])) {
		cout << "IMPOSSIBLE";
		}
	else if((a[3]<a[1]+a[2]) || (a[2]<a[1]+a[0])) {
		cout << "TRIANGLE";
		}
	else {cout << "SEGMENT";}
	}
