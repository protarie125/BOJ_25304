#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int x;
	cin >> x;

	int n;
	cin >> n;

	auto sum = int{ 0 };
	for (auto i = 0; i < n; ++i) {
		int a, b;
		cin >> a >> b;

		sum += a * b;
	}

	if (x == sum) {
		cout << "Yes";
	}
	else {
		cout << "No";
	}

	return 0;
}