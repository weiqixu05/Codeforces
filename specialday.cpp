#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int a, b;
	cin >> a >> b;
	if(a<2 && b < 18) {
		cout << "Before";
		}
	else if(a>2 && b > 18) {
		cout << "After";
		}
	else {cout << "Special";}
	}
