#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define pb push_back
#define FOR(i,n) for(int i = 0; i < n; i++)
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		n*=2;
		int a[n];
		set<int>s;
		FOR(i,n) {
			cin >> a[i];
			if(s.count(a[i])==0) {
				cout << a[i]<<" ";
				}
			s.insert(a[i]);
			}
		cout << "\n";
		}
	}
