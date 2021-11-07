#include <bits/stdc++.h>
using namespace std;
int main() {
	int n,x;
	cin >> n>>x;
	set<int>a;
	for (int i = 0; i < n; i++) {
		int j;
		cin >> j;
		a.insert(j);
		}
	int j = x/2;
	bool ok = 1;
	while (j>-1) {
		if(a.count(j)&&a.count(x-j)) {
			ok=0;
			break;
			}
		else {j--;}
		}
	ok?cout << "false":cout << "true";
	}
