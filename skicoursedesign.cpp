/* 
ID: weiqixu1
PROG: skidesign
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
	int sum = 0;
	int n;
	cin >> n;
	int a[n];
	FOR(i,0,n) {
		cin >> a[i];
		}
	sort(a,a+n);
	while(a[n-1]-a[0]>17) {
		sum+=pow(a[n-1]-a[0]-17, 2);
		a[n-1]-=a[n-1]-a[0]-17;
		sort(a,a+n);
		}
	cout << sum << "\n";
	}
 
int main() {
	ios::sync_with_stdio(0);
	//freopen("skidesign.in", "r", stdin);
	//freopen("skidesign.out", "w", stdout);
	int t=1;
	//cin >> t;
	while (t--) {
		solve();
		}
	}
