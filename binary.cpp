#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	vector<int> s;
	while (n>0) {
		if(n%2==1) {
			s.push_back(1);
			}
		else {s.push_back(0);}
		n/=2;
		}
	for (int i = s.size()-1; i >=0; i--) {
		cout << s[i];
		}
	}
