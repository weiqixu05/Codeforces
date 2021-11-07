#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

void solve() {
	int n;
	cin >> n;
	int a[n];
	int b[n];
	for(int i=0;i<n;i++) {
		cin >> a[i];
		}
	for(int i=0;i<n;i++) {
		cin >> b[i];
		}
		int suma=0;
		int sumb=0;
	for(int i=0;i<n;i++) {
		suma+=a[i];
		sumb+=b[i];
		if(suma==sumb) {
			cout << i+1 << "\n";
			return;
			}
		}
	cout << 0 << "\n";
	}

int main() {
	ios::sync_with_stdio(0);
	int t=1;
	while(t--) {
	solve();
	}
}
