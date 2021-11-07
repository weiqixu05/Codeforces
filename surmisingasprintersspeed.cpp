#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

void solve() {
	int n;
	cin >> n;
	vector<pair<double,double>> a;
	for(int i=0;i<n;i++) {
		double j,k;
		cin >> j >> k;
		a.pb(make_pair(j,k));
		}
	sort(a.begin(),a.begin()+n);
	double sum=0;
	for(int i=1;i<n;i++) {
		double time=a[i].first-a[i-1].first;
		double distance=a[i].second-a[i-1].second;
		if(distance<0) {
			distance*=-1;
			}
		if(distance/time>sum) {
			sum=distance/time;
			}
		}
	cout << fixed << setprecision(5) << sum;
	}

int main() {
	ios::sync_with_stdio(0);
	int t=1;
	while(t--) {
		solve();
		}
	}
