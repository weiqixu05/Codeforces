#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	ll n, k;
	cin >> n >> k;
	((n-k)/k) % 2 == 0 ? cout << "YES" : cout << "NO";
	}
