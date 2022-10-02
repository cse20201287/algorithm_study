#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int n, tmp, h, w, res;
double g;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> n;
	vector<int> v;
	vector<int> cnt(n + 1, 0);
	for (int i = 0; i < n; i++) {
		cin >> tmp;
		v.push_back(tmp);
	}
	for (int i = 0; i < n; i++) {
		double max = -9999999999;
		for (int j = i + 1; j < n; j++) {
			h = v[j] - v[i];
			w = j - i;
			g = h * 1.0 / w;
			if (g > max) {
				cnt[i]++;
				cnt[j]++;
				max = g;
			}
		}
	}
	for (int i = 0; i < n; i++)
		res = max(res, cnt[i]);
	cout << res;
	return 0;
}