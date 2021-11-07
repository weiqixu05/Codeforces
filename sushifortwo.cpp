#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int a[n];
	vector<int>number;
	int x = 0;
	int y = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (a[i] == 1) {
			number.push_back(y);
			x++;
			y = 0;
			}
		else  {number.push_back(x); y++; x = 0;}
		}
	number.push_back(x);
	number.push_back(y);
	int j = number.size()-1;
	for (int i = 0; i < j; i++) {
		if(number[i] == 0) {
			number.erase(number.begin()+i);
			i--;
			j--;
			}
		}
	vector<int>letter;
	j = number.size();
	for (int i = 1; i < j; i++) {
		letter.push_back(min(number[i], number[i-1]));
		}
	sort(letter.begin(), letter.end());
	j = letter.size()-1;
	cout << letter[j]*2;
	}
