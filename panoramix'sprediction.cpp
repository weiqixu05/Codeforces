#include <bits/stdc++.h>
using namespace std;
int main() {
	int a, b;
	cin >> a >> b;
	a++;
	bool ok = 1;
	while (ok) {
		int odd=0;
	for (int i = 2; i < a; i++) {
		if(a%i!=0) {
			odd++;
			}
		}
		if(odd==a-2&&a==b) {
		break;
		}
	else if(odd==a-2&&a!=b) {
		ok=0;
		break;
		}
	else if(a>b) {
		ok=0;
		break;
		}
	else {a++;}
	}
	ok?cout << "YES":cout << "NO";
	}
	
