#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FOR(i,a,n) for(int i=a;i<n;i++)

void solve() {
	int n;
	cin >> n;
	int a[n];
	FOR(i,0,n) {
		cin >> a[i];
		}
	int v[n];
	sort(a,a+n);
	if(n%2==0) {
		int c=0;
		for(int i=n/2-1;i>=0;i--) {
			c=i-(n/2-1);
			c=abs(c)*2;
			v[c]=a[i];
			}
		for(int i=n/2;i<n;i++) {
			v[(i-(n/2))*2+1]=a[i];
			}
		}
	else {
		int c=0;
		for(int i=n/2;i>=0;i--) {
			c=i-n/2;
			c=abs(c)*2;
			v[c]=a[i];
			}
		for(int i=n/2+1;i<n;i++) {
			v[(i-((n/2)+1))*2+1]=a[i];
			}
		}
	FOR(i,0,n) {
		cout << v[i] << " ";
		}
	}

int main() {
	ios::sync_with_stdio(0);
	int t=1;
	while(t--) {
		solve();
		}
	}
