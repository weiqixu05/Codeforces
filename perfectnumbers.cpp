#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;
	vector<int>a;
	for(int i=1;i<=n/2;i++) {
		if(n%i==0) {
			a.push_back(i);
			}
		}
	int sum=0;
	for(int i=0;i<a.size();i++) {
		sum+=a[i];
		}
	if(sum<n) {
		cout << n << " is a deficient number\n";
		}
	else if(sum==n) {
		cout << n << " is a perfect number\n";
		}
	else {cout << n << " is an abundant number\n";}
	}

int main() {
	ios::sync_with_stdio(0);
	int t=1;
	cin >> t;
	while(t--) {
		solve();
		}
	}
