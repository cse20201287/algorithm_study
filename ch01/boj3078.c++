#include <iostream>
#include <queue>
#include <string>
using namespace std;
int n, k;
string temp;
queue<int> q;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> temp;
        int len = temp.size();
        if (q.top().second.size()==temp.size()) st.push(make_pair(i + 1, temp));
	}
	return 0;
}