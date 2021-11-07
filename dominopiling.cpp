#include <iostream>
using namespace std;
int main() {
	int l, w;
	cin >> l >> w;
	int area = l * w;
	if (area % 2 == 0) {
		cout << area/2;
		}
	else {cout << (area - 1)/2;}
	}
