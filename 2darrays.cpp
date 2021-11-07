#include <bits/stdc++.h>
using namespace std;
int main() {
	int array[6][6];
	vector<int>ar;
	for (int i = 0; i < 6; i++) {
		for (int a = 0; a < 6; a++) {
			cin >> array[i][a];
			}
		}
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 4; j++) {
				int something = 0;
				for (int n = 0; n < 3; n++) {
					something += array[i][j+n]; 
					something += array[i+2][j+n];
					}
					something += array[i+1][j+1];
					ar.push_back(something);
				}
			}
			sort(ar.begin(), ar.end());
			cout << ar[15];
	}
	
