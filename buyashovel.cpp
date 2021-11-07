#include <bits/stdc++.h>
using namespace std;
int main() {
	long long int a, b;
	cin >> a >> b;
	long long int x = a%10;
	long long int n = x - b;
	long long int j = 1;
	while(n%10 != 0 && (a*j)%10 != 0) {
		j++;
		n += a;
		}
	cout << j;
	}
