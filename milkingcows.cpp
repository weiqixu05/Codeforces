/*
 ID: weiqixu1
 PROG: milk2
 LANG: C++
 */
#include <bits/stdc++.h>
using namespace std;
#define pb push_back
int main() {
	freopen("milk2.in", "r", stdin);
	freopen("milk2.out", "w", stdout);
	int min=INT_MAX, max=INT_MIN;
	int n;
	cin >> n;
	if(n==1) {
		int a,b;
		cin >> a >> b;
		cout << b-a << " " << 0 << "\n"; 
		}
	else {
	int a[n][2];
	for(int i = 0; i < n; i++) {
		cin >> a[i][0];
		cin >> a[i][1];
		if(a[i][0]<min) {
			min=a[i][0];
			}
		if(a[i][1]<min) {
			min=a[i][1];
			}
		if(a[i][1]>max) {
			max=a[i][1];
			}
		if(a[i][0]>max) {
			max=a[i][0];
			}
		}
	bool ar[max-min+1]; 
	for(int i = 0; i < max-min+1; i++) {
		ar[i]=0;
		} 
	for(int i = 0; i < n; i++) {
		for(int j = a[i][0]; j < a[i][1]; j++) {
			ar[j-min]=1;
			}
		} 
	vector<int>small;
	vector<int>big;
	int tally=1;
	for(int i = 1; i < max-min+1; i++) {
		if(ar[i]==ar[i-1]) {
			tally++;
			}
		else {
			if(ar[i-1]==0) {
				small.pb(tally);
				tally=1;
				}
			else {big.pb(tally); tally = 1;}
			}
		} 
	if(ar[max-min]==0&&tally>1) {
				small.pb(tally);

				}
			else if(ar[max-min]==1){big.pb(tally);}

		sort(small.begin(), small.end());
		sort(big.begin(), big.end()); 
		int l = small.size()-1; 
		int k = big.size()-1; 
		if(k>-1) {
			cout << big[k] << " ";
			}
		else {cout << 0 << " ";}
		if(l>-1) {
			cout << small[l] << "\n";
			}
		else {cout << 0 << "\n";}
	}
}



