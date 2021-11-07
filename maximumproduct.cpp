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
	vi pos,neg;
	FOR(i,0,n) {
		cin >> a[i];
		if(a[i]>=0) {
			pos.pb(a[i]);
			}
		else {neg.pb(a[i]);}
		}
	ll sum1=LLONG_MIN,sum2=LLONG_MIN,sum3=LLONG_MIN,sum4=LLONG_MIN,sum5=LLONG_MIN,sum6=LLONG_MIN;
	sort(all(pos));
	sort(all(neg), greater<>());
	if(neg.size()>=2&&pos.size()>=3) {
		sum1=neg[neg.size()-1]*neg[neg.size()-2]*pos[pos.size()-1]*pos[pos.size()-2]*pos[pos.size()-3];
		}
	if(neg.size()>=4&&pos.size()>=1) {
		sum2=neg[neg.size()-1]*neg[neg.size()-2]*neg[neg.size()-3]*neg[neg.size()-4]*pos[pos.size()-1];
		}
	if(pos.size()>=5) {
		sum3=pos[pos.size()-1]*pos[pos.size()-2]*pos[pos.size()-3]*pos[pos.size()-4]*pos[pos.size()-5];
		}
	if(neg.size()>=5) {
		sum4=neg[neg.size()-1]*neg[neg.size()-2]*neg[neg.size()-3]*neg[neg.size()-4]*neg[neg.size()-5];
		}
	if(neg.size()==1&&pos.size()>=4) {
		sum5=neg[neg.size()-1]*pos[pos.size()-1]*pos[pos.size()-2]*pos[pos.size()-3]*pos[pos.size()-4];
		}
	if(neg.size()>=3&&pos.size()>=2) {
		sum6=neg[neg.size()-1]*neg[neg.size()-2]*neg[neg.size()-3]*pos[pos.size()-1]*pos[pos.size()-2];
		}
	cout << max(max(sum1,max(sum2,sum3)),max(sum4,max(sum6,sum5))) << "\n";
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
