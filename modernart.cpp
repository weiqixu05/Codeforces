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
#define pof(x) erase((x).begin())
#define vi vector<int>
#define vs vector<string>
#define vll vector<long long int>
#define vc vector<char>
#define vb vector<bool>
#define vd vector<double>
#define vpii vector<pair<int,int>>
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
#define spii set<pair<int,int>>
#define msi multiset<int>
#define mss multiset<string>
#define msll multiset<long long int>
#define msc multiset<char>
#define msb multiset<bool>
#define mspii multiset<pair<int,int>>
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
	int n,m,k;
	cin >> n >> m >> k;
	si c;
	si r;
	int column=0;
	int row=0;
	FOR(i,0,k) {
		string l;
		cin >> l;
		int a;
		cin >> a;
		if(l=="C"&&!c.count(a)) {
			c.insert(a);
			column++;
			continue;
			}
		else if(l=="C"&&c.count(a)) {
			column--;
			c.erase(a);
			continue;
			}
		else if(l=="R"&&!r.count(a)) {
			row++;
			r.insert(a);
			continue;
			}
		else if(l=="R"&&r.count(a)) {
			row--;
			r.erase(a);
			continue;
			}
		}
	cout << ((m-column)*row)+((n-row)*column);
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

