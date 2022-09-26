#include <algorithm>
#include <iostream>
using namespace std;
int arr[15];
int n, cnt;
bool check(int level)
{
	for (int i = 0; i < level; i++) {
		if (arr[i] == arr[level] || abs(arr[level] - arr[i]) == level - i)
			return false;
	}
	return true;
}
void recur(int col)
{
	if (col == n)
		cnt++;
	for (int i = 0; i < n; i++) {
		arr[col] = i;
		if (check(col))
			recur(col + 1);
	}
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n;
	cnt = 0;
	recur(0);
	cout << cnt << endl;
}