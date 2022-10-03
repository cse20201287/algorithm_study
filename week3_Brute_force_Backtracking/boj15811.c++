#include <algorithm>
#include <iostream>
#include <string>
using namespace std;
string word[3];
int alpha[26];
string s;
int chk[11];
int cnt;
int flag = 0;
void solve(int depth)
{
	if (depth == s.size()) {
		long long b[3] = {0};
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < word[i].size(); j++) {
				b[i] *= 10;
				b[i] += alpha[word[i][j] - 'A'];
			}
		}
		if (b[0] + b[1] == b[2])
			flag = 1;
		return;
	}
	int cur = s[depth] - 'A';
	for (int i = 0; i < 10; i++) {
		if (chk[i])
			continue;
		chk[i] = 1;
		alpha[cur] = i;
		solve(depth + 1);
		chk[i] = 0;
		alpha[cur]--;
	}
}
int main()
{
	cin >> word[0] >> word[1] >> word[2];
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < word[i].size(); j++) {
			alpha[word[i][j] - 'A'] = 1;
		}
	}
	for (int i = 0; i < 26; i++) {
		if (alpha[i] == 1) {
			s += i + 'A';
			cnt++;
		}
	}
	if (cnt > 10) {
		cout << "NO";
		return 0;
	};
	solve(0);
	if (!flag)
		cout << "NO\n";
	else
		cout << "YES\n";
}