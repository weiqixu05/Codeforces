#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int a[n];
	int min[2]={500, 0};
	int max[2]={0,0};
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if(a[i]<=min[0]) {
			min[0]=a[i];
			min[1]=i;
			}
		if(a[i]>max[0]) {
			max[0]=a[i];
			max[1]=i;
			}	
		}
		if(min[1]<max[1]) {
	cout << max[1]+((n-1)-min[1])-1;
	}
	else {cout << max[1]+((n-1)-min[1]);}
	}
