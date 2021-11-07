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
	int n;
	cin >> n;
	double a[n+1];
	FOR(i,0,n+1) {
		cin >> a[i];
		}
	int b[n];
	FOR(i,0,n) {
		cin >> b[i];
		}
	double sum=0;
	FOR(i,0,n) {
		double j=a[i],k=a[i+1];
		int minimum=min(j,k);
		int maximum=max(j,k);
		sum+=b[i]*minimum;
		if(((maximum-minimum)*b[i])%2==1) {
			sum+=((maximum-minimum)*b[i])/2;
			sum+=0.5;
			}
		else{sum+=((maximum-minimum)*b[i])/2;}
		}
		
	cout << fixed << setprecision(1) << sum;
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

