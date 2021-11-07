#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define pb push_back
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		
		int a[n];
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			}
		if(n==1) {
			cout << 0 << "\n";
			} else {
		sort(a,a+n);
		int tally = 1;
		vector<int>k;
		for (int i = 1; i < n; i++) {
			if(a[i]==a[i-1]) {
				tally++;
				}
			else {
				k.pb(tally);
				tally=1;
				}
			}
		k.pb(tally);
		sort(k.begin(),k.end());
		int j = k.size();
		if(k[j-1]<n/2) {
			cout << k[j-1] << "\n";
			}
		else {
			if((k[j-1]==(n/2)+1&&n%2==0)||(k[j-1]>(n/2)+1)) {
				cout << j << "\n";
				}
			else {cout << j-1 << "\n";}
			}
} 
	}
	}

