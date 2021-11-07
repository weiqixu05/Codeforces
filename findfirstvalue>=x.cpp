#include <bits/stdc++.h>
using namespace std;

int binarysearch() {
	int n, k;
	cin >> n >> k;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		}
	sort(a, a+n);
	int l = 0;
	int r = n-1;
	int mid = l+(r-l)/2;
	while (l<=r) {
		if(a[mid] == k) {
			return mid;
			}
		a[mid] < k ? l = mid+1 : r = mid-1;
		}
	return -3;	
	}



int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout << binarysearch();
	}
