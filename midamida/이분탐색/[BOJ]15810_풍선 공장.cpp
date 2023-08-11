#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;

typedef long long ll;

int a[1000000];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	ll n, m;
	cin >> n >> m;


	ll min = 1000001;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (a[i] < min)min = a[i];
	}
	ll start = min;
	ll end = min * m;
    ll mid;

	while (start != end) {
		mid = (start + end) / 2;
		int sum = 0;

		for (int i = 0; i < n; i++) {
			sum += mid / a[i];
			if (sum >= m)break;
		}

		if (sum >= m)end = mid;
		else start = mid + 1;

	}

	cout << end;
	
	
}
