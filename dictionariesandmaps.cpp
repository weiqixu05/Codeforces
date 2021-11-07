#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	map<string, int>a;
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		int j;
		cin >> j;
		a[s]=j;
		}
	string l;
	map<string,int>::iterator it;
	while (cin >> l) {
			it=a.find(l);
			it!=a.end()?cout << l << "=" << it->second << "\n":cout <<"Not found\n"; 
			}

	}
	
/*3
sam 99912222
tom 11122222
harry 12299933
sam
edward
harry
*/
