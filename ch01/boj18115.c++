#include <deque>
#include <iostream>
#include <vector>
using namespace std;
int n, x;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	vector<int> v;
	deque<int> dq;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x;
		v.push_back(x);
	}
	int num = 1;
	for (int i = n - 1; i >= 0; i--) {
		if (v[i] == 1)
			dq.push_back(num);
		else if (v[i] == 2) {
			int temp = dq.back();
			dq.pop_back();
			dq.push_back(num);
			dq.push_back(temp);
		} else {
			dq.push_front(num);
		}
		num++;
	}
	for (int i = 0; i < n; i++) {
		cout << dq[i] << ' ';
	}
}