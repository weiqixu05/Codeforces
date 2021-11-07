#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	ll n,k;
	cin >> n >> k;
	if(n%2==0) {
		if(k>n/2) {
			cout << (k-(n/2))*2;
			}
		else {cout << k*2-1;}
		}
	else {
		if(k<=n/2+1) {
			cout << k*2-1;
			}
		else {cout << (k-(n/2)-1)*2;}
		}
	}
