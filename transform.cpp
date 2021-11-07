/*
 ID: weiqixu1
 PROG: transform
 LANG: C++ 
 */
 #include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define pb push_back
#define FOR(i,a,b) for(int i = a; i<b; i++)
#define pob pop_back

int solve() {
	int n;
	cin >> n;
	char a[n][n];
	char y[n][n];
	char ar[n][n];
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			cin >> a[i][j];
			y[i][j]=a[i][j];
			}
		}
		for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			cin >> ar[i][j];
			}
		}
		int x = 0, b = 0, sum=0;
		for(int i = 0; i < n; i++) {
			for(int j = n-1; j >=0; j--) {
				if(a[j][i]==ar[x][b]) {
					sum++;
					}
				else {break;}
				b++;
				}
				x++;
				b=0;
			}
		if(sum==n*n) {
			return 1;
			
			}
		sum=0;
		x=0;
		b=0;
		for(int i = n-1; i >=0; i--) {
			for(int j=n-1; j >=0; j--) {
				if(a[i][j]==ar[x][b]) {
					sum++;
					}
				else {break;}
				b++;
				}
				x++;
				b=0;
			}
			if(sum==n*n) {
			return 2;
			}
		sum=0;
		x=0;
		b=0;
		for(int i = n-1; i>=0; i--) {
			for(int j = 0; j <n; j++) {
				if(a[j][i]==ar[x][b]){
					sum++;
					}
				else {break;}
				b++;
				}
				x++;
				b=0;
			}
		if(sum==n*n) {
			return 3;
			}
		sum=0;
		x=0;
		b=0;
		int mid = n/2;
		if(n%2==1) {
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < n; j++) {
				if(a[i][j]==ar[i][mid+(mid-j)]) {
					sum++;
					}
				else {break;}
				}
			}
		if(sum==n*n) {
			return 4;
			}
		sum=0;
		x=0;
		b=0;
		for(int i = 0; i < n; i++) {
			for(int j = 0; j <n; j++) {
				y[i][j]=a[i][mid+(mid-j)];
				}
			}
		for(int i = 0; i < n; i++) {
			for(int j = n-1; j >=0; j--) {
				if(y[j][i]==ar[x][b]) {
					sum++;
					}
				else {break;}
				b++;
				}
				x++;
				b=0;
			}
		if(sum==n*n) {
			return 5;
			}
		sum=0;
		x=0;
		b=0;
		for(int i = n-1; i >=0; i--) {
			for(int j=n-1; j >=0; j--) {
				if(y[i][j]==ar[x][b]) {
					sum++;
					}
				else {break;}
				b++;
				}
				x++;
				b=0;
			}
			if(sum==n*n) {
			return 5;
			}
		sum=0;
		x=0;
		b=0;
		for(int i = n-1; i>=0; i--) {
			for(int j = 0; j <n; j++) {
				if(y[j][i]==ar[x][b]){
					sum++;
					}
				else {break;}
				b++;
				}
				x++;
				b=0;
			}
		if(sum==n*n) {
			return 5;
			}
		sum=0;
		x=0;
		b=0;}
		else {
			for(int i = 0; i < n; i++) {
			for(int j = 0; j < n; j++) {
				if(a[i][j]==ar[i][mid+(mid-j)-1]) {
					sum++;
					}
				else {break;}
				}
			}
		if(sum==n*n) {
			return 4;
			}
		sum=0;
		x=0;
		b=0;
		for(int i = 0; i < n; i++) {
			for(int j = 0; j <n; j++) {
				y[i][j]=a[i][mid+(mid-j)-1];
				}
			}
		for(int i = 0; i < n; i++) {
			for(int j = n-1; j >=0; j--) {
				if(y[j][i]==ar[x][b]) {
					sum++;
					}
				else {break;}
				b++;
				}
				x++;
				b=0;
			}
		if(sum==n*n) {
			return 5;
			}
		sum=0;
		x=0;
		b=0;
		for(int i = n-1; i >=0; i--) {
			for(int j=n-1; j >=0; j--) {
				if(y[i][j]==ar[x][b]) {
					sum++;
					}
				else {break;}
				b++;
				}
				x++;
				b=0;
			}
			if(sum==n*n) {
			return 5;
			}
		sum=0;
		x=0;
		b=0;
		for(int i = n-1; i>=0; i--) {
			for(int j = 0; j <n; j++) {
				if(y[j][i]==ar[x][b]){
					sum++;
					}
				else {break;}
				b++;
				}
				x++;
				b=0;
			}
		if(sum==n*n) {
			return 5;
			}
		sum=0;
		x=0;
		b=0;}
			
		for(int i = 0; i< n; i++) {
			for(int j = 0; j < n; j++) {
				if(a[i][j]==ar[i][j]) {
					sum++;
					}
				}
			}
		if(sum==n*n) {
			return 6;
			}
		sum=0;
		x=0;
		b=0;
		return 7;
		}
	

int main() {
	ios::sync_with_stdio(0);
	freopen("transform.in", "r", stdin);
	freopen("transform.out", "w", stdout);
	cout << solve() << "\n";
	}
	
	
	
	
	
	
	
	
	
