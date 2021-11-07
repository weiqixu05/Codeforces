#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
void solve() {
	uint64_t n;
	cin >> n;
	const uint64_t N =n;
	cout << n << "\n";
	while(n>99) {
		ll j=n%10;
		n=n/10-j;
		cout << n<< "\n";
		if(n<100&&n!=11) {
			cout << "The number " << N << " is not divisible by 11.\n";
			}
		else if(n<100&&n==11) {
			cout << "The number " << N << " is divisible by 11.\n";
			}
		}
	}

int main() {
	ios::sync_with_stdio(0);
	int t=1;
	while(t--) {
		solve();
		}
	}
