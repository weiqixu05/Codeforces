#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		if(n==1) {
			cout << 0;
			}
		else if(n%2==0) {
			cout << n/2-1;
			}
		else {cout << n/2;}
		cout << "\n";
		}
	}
