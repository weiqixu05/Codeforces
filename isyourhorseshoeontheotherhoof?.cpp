#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define pb push_back
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int a[4];
	for (int i = 0; i <4; i++) {
		cin>>a[i];
		}
	sort(a,a+4);
	int sum = 0;
	for(int i = 1; i <4; i++) {
		if(a[i]==a[i-1]) {
			sum++;
			}
		}
	cout << sum;
	}
