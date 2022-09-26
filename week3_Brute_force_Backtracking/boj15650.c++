#include <algorithm>
#include <iostream>
using namespace std;
int arr[9];
int n, m;
// bit 연산자를 활용한 recursion으로 문제 풀기
void nextPermuatationSearching()
{
	for (int i = 0; i < n; i++) {
		if (i < m)
			arr[i] = 0;
		else
			arr[i] = 1;
	}
	while (true) {
		for (int i = 0; i < n; i++) {
			if (arr[i] == 0) {
				cout << i + 1 << ' ';
			}
		}
		cout << '\n';
		if (!next_permutation(arr, arr + n))
			break;
	}
}
int main()
{
	cin >> n >> m;
	nextPermuatationSearching();
	return 0;
}