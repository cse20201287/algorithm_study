#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>
int n, a, b;
using namespace std;
int main()
{
	cin >> n;
	vector<pair<int, int>> v(n + 1);
	vector<int> cnt(n + 1, 1);
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		v[i] = make_pair(a, b);
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (v[i].first < v[j].first && v[i].second < v[j].second) {
				cnt[i]++;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		cout << cnt[i] << " ";
	}
	return 0;
}