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
	string a,b,c;
	cin >> a >> b >> c;
	multiset<char>n;
	for(int i = 0; i < a.size(); i++) {
		n.insert(a[i]);
		}
	for(int i = 0; i < b.size(); i++) {
		n.insert(b[i]);
		}
	for(int i = 0; i < c.size(); i++) {
		if(n.count(c[i])>0) {
			n.erase(n.find(c[i]));
			}
		else {cout << "NO"; return;}
		}
	if(n.size()>0) {
		cout << "NO";
		return;
		}
	cout << "YES";
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
