#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		int x, y;
		cin >> x >> y;
		int a, b;
		if(y<x) {
			a = y;
			b = x; 
			}
		else {a=x;b=y;}
		a*2 < b ? cout << b*b << "\n" : cout << (a*2)*(a*2) << "\n";
		}
	}
