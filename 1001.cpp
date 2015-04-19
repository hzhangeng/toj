#include <iostream>

using namespace std;

int main() {
	int i;
	while (std::cin >> i) {
		std::cout << static_cast<char>(i);
	}
	return 0;
}