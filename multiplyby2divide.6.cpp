#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		ll n;
		cin >> n;
		int ans = 0;
		while (n%3==0) {
			if (n%2==1) {
				ans++;
				n*=2;
				}
				ans++;
			n/=6;
			}
		if (n>1) {
			cout << -1 << "\n";
			}
		else cout << ans << "\n";
		}
	}
	
	
	
	
	
	
	
	
	
	
	
