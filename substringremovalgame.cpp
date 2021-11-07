/*
ID: weiqixu1
PROG: test
LANG: C++
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define FOR(i,a,b) for(int i = a; i<b; i++)
#define pob pop_back()
#define vi vector<int>
#define vs vector<string>
#define vll vector<long long int>
#define vc vector<char>
#define vb vector<bool>
#define vd vector<double>
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
#define mp make_pair
#define pii pair<int,int>
#define si set<int>
#define ss set<string>
#define sll set<long long int>
#define sc set<char>
#define sb set<bool>
#define sd set<double>
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
	string s;
	cin >> s;
	vi a;
	int prev;
	s[0]=='0'?prev=0:prev=1;
	for(int i = 1; i < s.size(); i++) {
		if(s[i]==s[i-1]) {
			prev++;
			}
		else if(s[i-1]=='1') {
			a.pb(prev);
			prev=1;
			}
		}
	if(s[s.size()-1]=='1') {
		a.pb(prev);
		}
	int sum = 0;
	for(int i = 0; i < a.size(); i++) {
		if(i%2==0) {
			sum+=a[i];
			}
		}
	cout << sum << "\n";
	}
 
int main() {
	ios::sync_with_stdio(0);
	//freopen("file.in", "r", stdin);
	//freopen("file.out", "w", stdout);
	int t=1;
	cin >> t;
	while (t--) {
		solve();
		}
	}
