//accept codeforces judge
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define pb push_back
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	double l; 
	cin >> l;
	double a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		}
	sort(a,a+n);
	double max = 0;
	for (int i = 1; i < n; i++) {
		if(a[i]-a[i-1]>max) {
			max=a[i]-a[i-1];
			}
		}
	if(l-a[n-1]>max/2) {
		max=(l-a[n-1])*2;
		}
	if(a[0]!=0&&a[0]>max/2) {
		max=a[0]*2;
		}
	cout << fixed << setprecision(9) << max/2;
	}
