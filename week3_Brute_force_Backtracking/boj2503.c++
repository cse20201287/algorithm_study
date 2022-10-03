#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int n, num;
int b, s, cnt, w;
int arr[1000] = {
	1,
};

int solve(string k, string n, int s, int q)
{
	int a = 0;
	int b = 0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (k[i] == n[j]) {
				if (i == j)
					a++;
				else
					b++;
			}
		}
	}
	if (a == s && b == q)
		return 1;
	else
		return 0;
}
int main()
{
	cin >> n;
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	for (int i = 123; i < 988; i++) {
		arr[i] = 1;
	}
	//같은 숫자, 0이 들어간 숫자 제외시켜야 함
	for (int i = 123; i < 988; i++) {
		string str = to_string(i);
		if ((str[0] == '0' || str[1] == '0' || str[2] == '0') || (str[0] == str[1] || str[1] == str[2] || str[0] == str[2])) {
			arr[i] = 0;
			continue;
		}
	}
	for (int i = 0; i < n; i++) {
		cin >> num;
		cin >> s;
		cin >> b;
		for (int j = 123; j < 988; j++) {
			if (arr[j] == 1) {
				if (solve(to_string(num), to_string(j), s, b) == 0)
					arr[j] = 0;
			}
		}
		// for (int i = 123; i < 988; i++) {
		// 	cout << arr[i];
		// }
		// cout << '\n';
	}
	for (int i = 123; i < 988; i++) {
		if (arr[i] == 1)
			cnt++;
	}
	cout << cnt;
	return 0;
}
