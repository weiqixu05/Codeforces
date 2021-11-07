#include <bits/stdc++.h>
using namespace std;
int main() {
	string s;
	cin >> s;
	if(s.size()<7) {
		cout << "no";
		}	else {
	int n = s.size();
	n--;
	int zero = 0;
	bool ok = 0;
	while (n>=0) {
		if(zero<6&&s[n]=='0') {
			zero++;
			}
		else if(zero==6&&s[n]=='1'){
			ok=1;
			break;
			}
		n--;
		}ok?cout << "yes":cout <<"no";
		} 
	}
