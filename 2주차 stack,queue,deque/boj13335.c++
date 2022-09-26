#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;
queue<int> q;
int n, w, l;
int temp, sum, cnt;
int main()
{
	cin >> n >> w >> l;
	for (int i = 0; i < n; i++) {
		cin >> temp;
		while (1) {
			if (q.size() == w) {
				sum -= q.front();
				q.pop();
			}
			if (sum + temp <= l)
				break;
			q.push(0);
			cnt++;
		}
		q.push(temp);
		sum += temp;
		cnt++;
	}
	cnt += w;
	cout << cnt;
}