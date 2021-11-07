#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		if(n==1 || n==2) {
			cout << 1 << "\n";
			} else {
				int sum = 1;
				if(n%2==0) {
					sum+=(n/2)-1;
					}
				else {
					sum+=n/2;
					}
					cout << sum << "\n";
				}
		}
	}
