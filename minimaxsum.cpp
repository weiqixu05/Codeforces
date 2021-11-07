#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int ar[5];
	long long int x = 0;
	long long int y = 0;
	for (int i = 0; i < 5; i++) {
		cin >> ar[i];
		}
	sort(begin(ar), end(ar));
	for (int i = 0; i < 4; i++) {
		x += ar[i];
		}
	for (int i = 1; i < 5; i++) {
		y += ar[i];
		}
	cout << x << " " << y;
	
	}
