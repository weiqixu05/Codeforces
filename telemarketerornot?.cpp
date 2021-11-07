#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	if(a==8 || a==9) {
		if((d==8) || d==9) {
			if (b==c) {
				cout << "ignore";
				}
			}
		} else {cout << "answer";}
	}
