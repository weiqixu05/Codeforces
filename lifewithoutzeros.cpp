#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	ll a, b;
	cin >> a >> b;
	ll c=a+b;
	string x,y,z;
	x=to_string(a);
	for(int i = 0; i < x.size(); i++) {
		if(x[i]=='0') {
			x.erase(x.begin()+i);
			i--;
			}		
			}
	y=to_string(b);
	for(int i = 0; i < y.size(); i++) {
		if(y[i]=='0') {
			y.erase(y.begin()+i);
			i--;
			}		
			}
	z=to_string(c);
	for(int i = 0; i < z.size(); i++) {
		if(z[i]=='0') {
			z.erase(z.begin()+i);
			i--;
			}		
			}
	int power = 0;
	a=0;
	for (int i = x.size()-1; i >=0;i--) {
		int n = x[i]-'0';
		a+=pow(10,power)*n;
		power++;
		}
	power = 0;
	b=0;
	for (int i = y.size()-1; i >=0;i--) {
		int n = y[i]-'0';
		b+=pow(10,power)*n;
		power++;
		}
	power = 0;
	c=0;
	for (int i = z.size()-1; i >=0;i--) {
		int n = z[i]-'0';
		c+=pow(10,power)*n;
		power++;
		}
	a+b==c?cout << "YES" : cout << "NO";
	}
