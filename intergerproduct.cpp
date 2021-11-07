/*
ID: weiqixu1
PROG: test
LANG: C++
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define pb push_back
#define FOR(i,a,b) for(int i = a; i<b; i++)
#define pob pop_back()
#define vi vector<int>
#define vs vector<string>
#define vll vector<long long int>
#define vc vector<char>
#define vb vector<bool>
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
#define mp make_pair
#define pii pair<int,int>
#define si set<int>
mt19937 mt_rng(chrono::steady_clock::now().time_since_epoch().count());
ll randint(ll a, ll b) {
	return uniform_int_distribution<ll>(a, b)(mt_rng);
}
 
void solve() {
	int sum = 0;
	int n;
	cin >> n;
	double a[n];
	FOR(i,0,n) {
		cin >> a[i];
		}
	FOR(i,0,n) {
		FOR(j,i+1,n) {
			if(fmod(a[i]*a[j],1.000000000)==0) {
				sum++;
				cout << a[i] << " " << a[j]<< " " << i << " " << j << "\n";
				}
			}
		}
	cout << sum;
	}
 
int main() {
	ios::sync_with_stdio(0);
	//freopen("file.in", "r", stdin);
	//freopen("file.out", "w", stdout);
	int t=1;
	//cin >> t;
	while (t--) {
		solve();
		}
	}

