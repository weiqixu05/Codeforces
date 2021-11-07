#include <iostream>
#include <vector>
using namespace std;
int main() {
	int n;
	int k;
	cin >> n >> k;
	int a[n];
	int sum = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		}
	for (int x = 0; x < n; x++) {
		if (a[x] >= a[k - 1] && a[x] > 0) {
			sum += 1;
			}
		}
		cout << sum;
	}

