#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, k;
	cin >> n >> k;
	char a[n];
	int t, g;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if(a[i]=='T') {
			t=i;
			}
		if(a[i]=='G') {
			g=i;
			}
		}
	if(g==t) {
		cout << "YES";
		}
	else if(g<t) {
		bool ok = 0;
		while (g<=t) {
			g+=k;
			if(a[g]=='#'&&g<n) {
				break;
				}
			else if(a[g]=='T'&&g<n) {
				ok=1;
				break;
				}
			} ok?cout << "YES":cout <<"NO";
		}
	else {
		bool ok=0;
		while (g>=t) {
			g-=k;
			if(a[g]=='#' && g>-1) {
				break;
				}
			else if(a[g]=='T'&&g>-1) {
				ok=1;
				break;
				}
			} ok?cout << "YES":cout <<"NO";
		}
	}
