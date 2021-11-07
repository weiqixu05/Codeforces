#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	ll n, m, a;
	ll sum = 0;
	cin >> n >> m >> a;
	if (n%a != 0) {
		sum+=1;
		}
		sum += n/a;
		m -= a;
		ll tally = sum;
	if (m%a != 0 && m > 0) {
		sum += ((m/a)+1)*(tally);
		}
	else if (m > 0){sum += (m/a)*tally;}
	cout << sum;
	}
