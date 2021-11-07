/*
ID: weiqixu1
PROG: combo
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
#define ss set<string>
#define ts to_string
mt19937 mt_rng(chrono::steady_clock::now().time_since_epoch().count());
ll randint(ll a, ll b) {
	return uniform_int_distribution<ll>(a, b)(mt_rng);
}

ll mod(ll a, ll b) {
	ll ret = a%b; 
	return ret>=0? ret: ret+b; 
	}
 
void solve() {
	int n;
	cin >> n;
	int a[2][3];
	FOR(i,0,2) {
		cin >> a[i][0] >> a[i][1] >> a[i][2];
		}
	ss v;
	for(int i = a[0][0]-2; i <= a[0][0]+2; i++) {
		for(int j = a[0][1]-2; j<=a[0][1]+2; j++) {
			for(int k = a[0][2]-2; k<=a[0][2]+2; k++) {
				int x=mod(i,n),y=mod(j,n),z=mod(k,n);
					if(x==0) {
					x=n;
					}
				if(y==0) {
					y=n;
					}
				if(z==0) {
					z=n;
					}
				string s;
				s+=ts(x);
				s.pb(',');
				s+=ts(y);
				s.pb(',');
				s+=ts(z);
				v.insert(s);
				}
			}
		}
	for(int i = a[1][0]-2; i <= a[1][0]+2; i++) {
		for(int j = a[1][1]-2; j<=a[1][1]+2; j++) {
			for(int k = a[1][2]-2; k<=a[1][2]+2; k++) {
				int x=mod(i,n),y=mod(j,n),z=mod(k,n);
				if(x==0) {
					x=n;
					}
				if(y==0) {
					y=n;
					}
				if(z==0) {
					z=n;
					}
				string s;
				s+=ts(x);
				s.pb(',');
				s+=ts(y);
				s.pb(',');
				s+=ts(z);
				v.insert(s);
				}
			}
		}
	cout << v.size() << "\n";
	}
 
int main() {
	ios::sync_with_stdio(0);
	freopen("combo.in", "r", stdin);
	freopen("combo.out", "w", stdout);
	int t=1;
	//cin >> t;
	while (t--) {
		solve();
		}
	}
