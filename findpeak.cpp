#include <bits/stdc++.h>
using namespace std;

int peak() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		}
	int l = 0;
	int r = n-1;
	int mid = l+(r-l)/2;
	int ans = 0;
	while (l<=r) {
		if(a[mid] > a[mid-1]) {
			ans = a[mid];
			l = mid+1;
			}
		else{r = mid-1;}
		}
	return ans;
	}





int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout << peak();
	}
