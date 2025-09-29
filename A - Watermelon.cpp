#include <bits/stdc++.h>

using namespace std;

int main() {
	int m;
	cin >> m;
	if (m > 2) {
		bool ans = (m % 2 == 0) ? 1 : 0;
		if (ans) {
			cout << "YES";
		}
		else {
			cout << "NO";
		}
	}
	else {
		cout << "NO";
	}
}

