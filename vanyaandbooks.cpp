#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	ll n;
	cin >> n;
	if (n < 10) {
		cout << n;
		}
	else {
	string s = to_string(n);
	int power = s.size();
	ll sum = 0;
	ll something = 1;
	ll tally = 1;
	for (int i = 1; i < power; i++) {
		sum += (9*something)*tally;
		something *= 10;
		tally++;
		}
		int rando = 0;
		for(int i = 0; i < power-1; i++) {
			rando += 9*pow(10, i);
			}
		sum += (n - rando)* power;
		cout << sum;
	}
}
