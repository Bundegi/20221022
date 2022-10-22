#include <iostream>
#include <algorithm>
#include <vector>
#define fast ios::sync_with_stdio(0), cin.tie(nullptr), cout.tie(nullptr)
using namespace std;
//1448 backjun
int main() {
	fast;
	int N;
	cin >> N;
	vector<int> Array;
	int Su;
	for (int i = 0; i < N; i++) {
		cin >> Su;
		Array.push_back(Su);
	}
	sort(Array.begin(), Array.end(),greater<int>());
	for (int i = 1; i < N - 1; i++) {
		if (Array[i - 1] < Array[i] + Array[i + 1]) {
			cout << Array[i - 1] + Array[i] + Array[i + 1];
			return 0;
		}
	}
	cout << -1;
}