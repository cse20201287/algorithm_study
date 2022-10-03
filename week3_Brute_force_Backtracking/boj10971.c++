#include <algorithm>
#include <iostream>
#include <string>
using namespace std;
int n, tmp;
bool visit[11];
int w[11][11];
int minval;
int user_min(int x, int y)
{
	if (x < y)
		return x;
	return y;
};
void solve(int start, int row, int sum, int count)
{
	if (!visit[row]) {
		visit[row] = true;
		for (int i = 0; i < n; i++) {
			if (w[row][i]) {
				solve(start, i, sum + w[row][i], count + 1);
			}
		}
		visit[row] = false;
	}
	if (count == n && start == row) {
		minval = (minval == 0) ? sum : user_min(sum, minval);
	}
};
int main()
{
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> tmp;
			w[i][j] = tmp;
		}
	}
	for (int i = 0; i < n; i++) {
		solve(i, i, 0, 0);
	}
	cout << minval << '\n';
	return 0;
}