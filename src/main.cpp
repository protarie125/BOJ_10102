#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	auto v = int{};
	cin >> v;

	auto s = string{};
	cin >> s;

	auto a = int{ 0 };
	auto b = int{ 0 };
	for (const auto& c : s) {
		if ('A' == c) {
			++a;
		}
		else {
			++b;
		}
	}

	if (b < a) {
		cout << 'A';
	}
	else if (a < b) {
		cout << 'B';
	}
	else {
		cout << "Tie";
	}

	return 0;
}