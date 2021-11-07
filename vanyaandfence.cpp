#include <bits/stdc++.h>
using namespace std;
#define ll long long 
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, k;
	cin >> n >> k;
	int a[n];
	int sum = n;
	for(int i = 0; i < n; i++) {
		cin >> a[i];
		if(a[i]>k){
			sum++;
			}
		}
	cout << sum;
	}
