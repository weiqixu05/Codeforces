#include <bits/stdc++.h>
using namespace std;
int main() {
	int xone, vone, xtwo, vtwo;
	cin >> xone >> vone >> xtwo >> vtwo;
	if (vone <= vtwo) {
		cout << "NO";
		}
	else { int lengthone = xone;
		int lengthtwo = xtwo;
		int z = 0;
		while (lengthone <= lengthtwo) {
			lengthtwo += vtwo;
			lengthone += vone;
			if (lengthone == lengthtwo) {
				z++;
				}
			}
			if (z > 0) {
				cout << "YES";
				}
			else {cout << "NO";}
		}
	}
