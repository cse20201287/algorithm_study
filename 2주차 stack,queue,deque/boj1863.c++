#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	string s, temp;
	int len, i;

	cin >> s;
	len = s.length();

	temp.push_back(s[0]);
	for (int i = 1; i < len; i++) {
		if (temp[0] >= s[i]) {
			reverse(temp.begin(), temp.end());
			temp.push_back(s[i]);
			reverse(temp.begin(), temp.end());
		} else {
			temp.push_back(s[i]);
		}
	}
	cout << temp;
	return 0;
}