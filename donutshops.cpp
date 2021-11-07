#include <bits/stdc++.h>
using namespace std;
#define ll long long
void donut() {
	ll a, b, c;
	cin >> a >> b >> c;
	if(a<c) {
		cout << 1 << " ";
		}
	else {cout << -1 << " ";}
	if (a*b > c) {
		cout << b << " \n";
		}
	else {cout << -1 << " \n";}
	}






int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		donut();
		}
	}
