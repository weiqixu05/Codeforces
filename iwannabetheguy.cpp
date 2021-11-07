#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define pb push_back
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int p, q;
	cin >> p;
	vector<int>a;
	for (int i = 0; i < p; i++) {
		int l;
		cin >> l;
		a.pb(l);
		}
	cin >> q;
	for (int i = 0; i < q; i++) {
		int l; cin >> l;
		a.pb(l);
		}
	sort(a.begin(),a.end());
	int sum = 0;
	for (int i = 1; i <= n; i++) {
		if(binary_search(a.begin(),a.end(),i)) {
			sum++;
			}
		}
	sum==n?cout << "I become the guy.": cout << "Oh, my keyboard!";
	}
