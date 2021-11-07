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
	ll n,k;
	cin >> n >> k;
	ll a[n];
	ll max = LLONG_MIN;
	FOR(i,0,n) {
		cin >> a[i];
		if(a[i]>max) {
			max=a[i];
			}
		}
	if(k%2==1) {
		FOR(i,0,n) {
			cout << max-a[i] << " ";
			}
		cout << "\n";
		}
	else {
		ll min=LLONG_MIN;
		FOR(i,0,n) {
			a[i]=max-a[i];
			if(a[i]>min) {
				min=a[i];
				}
			}
		FOR(i,0,n) {
			cout << min-a[i] << " ";
			}
		cout << "\n";
		}
	}
 
int main() {
	ios::sync_with_stdio(0);
	//freopen("file.in", "r", stdin);
	//freopen("file.out", "w", stdout);
	int t;
	cin >> t;
	while (t--) {
		solve();
		}
	}
