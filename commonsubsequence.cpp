#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define pb push_back
#define FOR(i,a,b) for(int i = a; i < b; i++)
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		int n,n1;
		cin >> n >> n1;
		int a[n];
		int ar[n1];
		for(int i = 0; i < n; i++) {
			cin >> a[i];
			}
			int sum = 0;
		FOR(i,0,n1) {
		cin >> ar[i];	
		for(int j = 0; j < n; j++) {
			if(a[j]==ar[i]) {
				sum = a[j];
				break;
				}
			}
		}
		sum>0?cout << "YES" << "\n"<< 1 << " " << sum << "\n":cout << "NO" << "\n";
		}
	}
