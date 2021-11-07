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
	int min=INT_MAX;
	int n;
	cin >> n;
	int a[n];
	vi sum;
	si cnt;
	FOR(i,0,n) {
		cin >> a[i];
		cnt.insert(i);
		if(a[i]<min) {
			min=a[i];
			}
		}
	int l=0;
	FOR(s,min+1,(n*2)+1) {
		FOR(i,0,n) {
			if(cnt.count(i)==0) {
				continue;
				}
			FOR(j,i+1,n) {
				if(cnt.count(j)==0) {
					continue;
					}
				if(a[i]+a[j]==s&&cnt.count(i)&&cnt.count(j)) {
					l++;
					cnt.erase(cnt.find(i));
					cnt.erase(cnt.find(j));
					}
				}
		}
		sum.pb(l);
		l=0;
		FOR(k,0,n) {
			cnt.insert(k);
			}
	}
	sort(all(sum));
	cout << sum[sum.size()-1] << "\n";
	
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
