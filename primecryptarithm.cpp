/*
ID: weiqixu1
PROG: crypt1
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
	si c;
	FOR(i,0,n) {
		cin >> a[i];
		c.insert(a[i]);
		}
	FOR(i,0,n) {
		FOR(j,0,n) {
			FOR(k,0,n) {
				FOR(x,0,n) {
					FOR(y,0,n) {
						int l = (a[i]*100)+(a[j]*10)+a[k];
						int r = (a[x]*10)+a[y];
						int m = l*r;
						string s = ts(m);
						int w = 0;
						if(m<10000&&m>999) {
							for(int b = 0; b < s.size(); b++) {
								if(c.count(s[b]-'0')) {
									w++;
									}
								}
							}
						else {continue;}
						if(w!=4) {
							continue;
							}
						m=l*a[x];
						w=0;
						s=ts(m);
						if(s.size()!=3) {continue;}
						for(int b = 0; b < s.size(); b++) {
								if(c.count(s[b]-'0')) {
									w++;
									}
								}
						if(w!=3) {
							continue;
							}
						m=l*a[y];
						w=0;
						s=ts(m);
						if(s.size()!=3) {continue;}
						for(int b = 0; b < s.size(); b++) {
								if(c.count(s[b]-'0')) {
									w++;
									}
								}
						if(w!=3) {
							continue;
							}
						sum++;
						}
					}
				}
			}
		}
	cout << sum << "\n";
	}
 
int main() {
	ios::sync_with_stdio(0);
	freopen("crypt1.in", "r", stdin);
	freopen("crypt1.out", "w", stdout);
	int t=1;
	//cin >> t;
	while (t--) {
		solve();
		}
	}

