#include <bits/stdc++.h>
using namespace std;

void sieve() {
	int a,b;
	cin >> a >> b;
	bool* n = new bool[b+1];
	for(int i = 0; i <= b; i++) {
		if(i==1) {
			n[i]=1;
			}
		n[i]=0;
		}
		int tally = 2;
	while (tally<=sqrt(b)) {
	for(int i = tally*tally; i <=b; i+=tally) {
		
			n[i]=1;
			
		}
		tally++;
		while(n[tally]==1) {
			tally++;
			}
			
	}
	for(int i = a; i <= b; i++) {
		if(n[i]==0&&i!=1) {
			cout << i << "\n";
			}
		}
	}


int main() {
	ios_base::sync_with_stdio(0);
	int t;
	cin >> t;
	while (t--) {
		sieve();
		}
	}

