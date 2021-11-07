//please accept this time codeforces judge
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	string s;
	cin >> s;
	bool ok = false;
	if (s.size()<3) {
		cout << "No";
		}
	else {
	for (int i = 0; i < s.size()-2; i++) {
		if((s[i] == 'A' && ((s[i+1] == 'B' && s[i+2] == 'C') || (s[i+1] == 'C' && s[i+2] == 'B'))) || (s[i] == 'B' && ((s[i+1] == 'A' && s[i+2] == 'C') || (s[i+1] == 'C' && s[i+2] == 'A'))) || (s[i] == 'C' && ((s[i+1] == 'A' && s[i+2] == 'B') || (s[i+1] == 'B' && s[i+2] == 'A')))) {
			ok = true;
			break;
			}
	}
	ok?cout << "Yes" : cout << "No";
}
}
