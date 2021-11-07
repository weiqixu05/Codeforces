#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int a, b ,c ;
	cin >> a >> b >> c;
	int max = 0;
	if(a+b+c>max) {
		max=a+b+c;
		}
	if(a*b+c>max) {
		max=a*b+c;
		}
	if(a+b*c>max) {
		max=a+b*c;
		}
	if(a*b*c>max) {
		max=a*b*c;
		}
	if((a+b)*c>max) {
		
		max=(a+b)*c;
		}
	if(a*(b+c)>max) {
		max=a*(b+c);
		}
	cout << max;
	}
