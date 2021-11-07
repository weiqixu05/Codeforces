#include <bits/stdc++.h>
using namespace std;

int binarysearch(int a[4], int k) {
	int l = 0;
	int r = 4;
	int mid = l+(r-l)/2;
	while (l<=r) {
		if (a[mid] == k) {
			return mid;
			}
		else {a[mid] < k ? l=mid+1 : r=mid-1;}
		}
	return -1;
	}
int prev(int a[4], int k) {
	int previous = 0;
	for (int i = 0; i < 4; i++) {
		if(a[i]>k && previous < k) {
			return i;
			}
		else {previous = a[i];}
		}
	return 3;
	}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int a[4];
	for (int i = 0; i < 4; i++) {
		cin >> a[i];
		}
	int k;
	cin >> k;
	int n = binarysearch(a, k);
	if (n>-1) {
		cout << n;
		}
	else {
		cout << prev(a, k);
		}
	}
