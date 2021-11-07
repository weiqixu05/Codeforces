#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int a[3];
	for (int i = 0; i < 3; i++) {
		cin >> a[i];}
	sort(a,a+3);
	int k;
	cin >> k;
	int sum = 0;
	if(a[2]-a[1]<k) {
		sum+=k-(a[2]-a[1]);
		}
	if(a[1]-a[0]<k) {
		sum+=k-(a[1]-a[0]);
		}
		cout << sum;
	}
