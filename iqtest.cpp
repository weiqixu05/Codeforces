#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int a[n];
	int even = 0;
	int odd = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if(a[i]%2==0) {
			even++;
			}
		else {odd++;}
		}
	if (even>odd) {
		for (int i = 0; i < n; i++) {
			if(a[i]%2==1) {
				cout << i+1;
				}
			}
		}
	else {for (int i = 0; i < n; i++) {
		if(a[i]%2==0) {
			cout << i+1;}
		}}
	}
