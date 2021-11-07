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
	int a,b,x,y,n;
	cin >> a >> b >> x >> y >> n;
	ll mina,mina1,minb,minb1;
	ll sum=-5000,sum1=-5000,sum2=-5000,sum3=-5000;
	if(a-n<x) {
		mina=x;
		if(b-(n-(a-x))>=y) {
			sum=mina*(b-(n-(a-x)));
			}
		else {
			sum=mina*y;
			}
		}
	if(a-n>=x) {
		mina1=a-n;
		sum1=mina1*b;
		}
	if(b-n<y) {
		minb=y;
		if(a-(n-(b-y))>=x) {
			sum2=minb*(a-(n-(b-y)));
			}
		else {
			sum2=minb*x;
			}
		}
	if(b-n>=y) {
		minb1=b-n;
		sum3=minb1*a;
		}
	ll q,w,e,r;
	if(sum>0) {
		q=sum;
		}
	else {q=LLONG_MAX;}
	if(sum1>0) {
		w=sum1;
		}
	else {
		w=LLONG_MAX;
		}
	if(sum2>0) {
		e=sum2;
		}
	else {e=LLONG_MAX;}
	if(sum3>0) {
		r=sum3;
		}
	else{r=LLONG_MAX;}
	cout << min(min(q,w),min(e,r)) << "\n";
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
