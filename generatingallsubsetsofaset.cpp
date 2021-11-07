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
 
void solve(int n, int k, vi &v) {
	if(k==n) {
		cout << "(";
		for(int i = 0; i < v.size(); i++) {
			cout << v[i] << ",";
			}
		cout << ")";
		}
	else {
		v.pb(k+1);
		solve(n,k+1,v);
		v.pob;
		solve(n,k+1,v);
		}
	}
 
int main() {
	ios::sync_with_stdio(0);
	//freopen("file.in", "r", stdin);
	//freopen("file.out", "w", stdout);
	int t=1;
	//cin >> t;
	vi v;
	int n;
	cin >> n;
	int k;
	k=0;
	while (t--) {
		solve(n,k,v);
		}
	}
