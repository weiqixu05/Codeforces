#include <iostream> 
using namespace std;
int main() {
int n;
string s;
cin >> n;

while (n > 0)	{
	cin >> s;
	if (s.size() > 10)	{
	cout << s[0] << s.size() - 2 << s.back() << "\n";
	n--;
		} else {
			cout << s << "\n";
			n--;
			}
	}
}	
