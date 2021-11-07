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
	int n;
	cin >> n;
	int a[n];
	vpii q;
	vpii w;
	vpii e;
	int one=0,two=0,three=0;
	FOR(i,0,n) {
		cin >> a[i];
		if(a[i]==1) {
			one++;
			q.pb(mp(a[i],i+1));
			}
		else if(a[i]==2) {
			two++;
			w.pb(mp(a[i],i+1));
			}
		else {three++;e.pb(mp(a[i],i+1));}	
		}
	if(min(min(one,two),three)!=0){
		cout << min(min(one,two),three) << "\n";
		}
	else {cout << 0;return;}
	for(int i = 0; i < min(min(one,two),three); i++) {
		cout << q[0].second << " ";
		cout << w[0].second << " ";
		cout << e[0].second << "\n";
		q.erase(q.begin());
		w.erase(w.begin());
		e.erase(e.begin());
		}
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
