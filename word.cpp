#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	string s;
	cin >> s;
	int upper = 0;
	int lower = 0;
	for (int i = 0; i < s.size(); i++) {
		if(s[i] > 96) {
			lower++;
			}
		else {upper++;}
		}
		if (upper > lower) {
	for (int i = 0; i < s.size(); i++) {
		if(s[i] > 96) {
			s[i]-=32;
			}
		}
	} else {
		for (int i = 0; i < s.size(); i++) {
			if(s[i] < 96) {
				s[i] += 32;
				}
			}
		}
	cout << s;
	}
