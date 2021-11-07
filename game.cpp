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
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		}
	sort(a,a+n);
	n%2==1?cout << a[n/2]:cout <<a[n/2-1];
		}
	
