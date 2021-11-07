#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	if(n==1) {
		cout << "I hate it";
		}
	else {
		for (int i = 1; i < n; i++) {
			if(i%2==1) {
				cout << "I hate that ";
				}
			else {cout << "I love that ";}
			}
		n%2==1?cout << "I hate it":cout << "I love it";		}
	}
