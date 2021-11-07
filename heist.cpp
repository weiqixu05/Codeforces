#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		}	
		sort(a,a+n);
		int sum = 0;
		int j = 1;
		for (int i = a[0]+1; i < a[n-1]; i++) {
			if(a[j] != i) {sum++;}
			else {j++;}
			}
			cout << sum;
		}
