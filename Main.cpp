#include <iostream>
#include <vector>
#include <string>



int main() {
	int m, n, k;
	std::cin >> m >> n >> k;
	std::vector<std::vector<char>> field(m, std::vector<char>(n));

	for (int i = 0; i != m; i++) {
		for (int j = 0; j != n; j++) {
			field[i][j] = '0';
		}
	}

	for (int i = 0; i < k; i++) {
		int a, b;
		std::cin >> a >> b;
		field[b][a] = '*';
	}

	for (int i = 0; i != n; i++) {
		for (int j = 0; j != m; j++) {
			std::cout << field[i][j] << ' ';
		}

		std::cout << '\n';
	}

	std::cin >> m;

}