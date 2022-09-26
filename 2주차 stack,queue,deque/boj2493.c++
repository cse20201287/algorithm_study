#include <iostream>
#include <stack>
using namespace std;
int n, h;
stack<pair<int, int>> st;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> h;
		while (!st.empty()) {
			if (h < st.top().second) {
				cout << st.top().first << " ";
				break;
			}
			st.pop();
		}
		if (st.empty()) {
			cout << 0 << " ";
		}
		st.push(make_pair(i + 1, h));
	}
	return 0;
}