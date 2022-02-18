#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int w;
	cin >> w;

	if (w < 4) {
		cout << "NO";
		return 0;
	}

	if (0 == w % 2) {
		cout << "YES";
		return 0;
	}

	cout << "NO";
	return 0;
}