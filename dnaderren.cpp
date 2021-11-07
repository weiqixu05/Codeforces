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
	string s;
	cin >> s;
	int i=1;
	vi a;
	int k=s.size();
	for(int j=0;j<k;j++) {
		if(s[j]=='A') {
			a.pb(1);
			}
		else {a.pb(0);}
		}
		string l;
		l.pb(s[0]);
		int prev=a[0];
	while(i<k) {
		if(a[i]!=a[i-1]) {
			l.pb(s[i]);
			prev=a[i];
			i++;
			}
		else{cout << l<< " ";
			prev=a[i];
			l.clear();
			l.pb(s[i]);
			i++;
			}
		}
		cout << l << "\n";
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


