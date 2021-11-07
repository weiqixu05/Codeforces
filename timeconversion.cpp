#include <iostream>
#include <cstdio>
#include <string.h>
#include <stdio.h>

using namespace std;

int main() {
	string s;
	int second;
	int minute;
	int hour;
	cin >> s;
	hour = (s[0] - '0') * 10 + (s[1] - '0');
	minute = (s[3] - '0') * 10 + (s[4] - '0');
	second = (s[6] - '0') * 10 + (s[7] - '0');
	
	if (s[8] == 'P' && hour != 12) {
		hour += 12;
		}
		
	if (s[8] == 'A' && hour == 12) {
		hour -= 12;
		}
		printf("%02d:%02d:%02d\n", hour, minute, second);
		}
