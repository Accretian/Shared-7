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


	//мины считаются не с 0 а 1;
	for (int i = 0; i < k; i++) {
		int a, b;
		std::cin >> a >> b;
		a--; b--;
		field[a][b] = '*';
	}

	for (int i = 0; i != m; i++) {
		for (int j = 0; j != n; j++) {
			if (field[i][j] != '*') {
				if ((i - 1) >= 0 && (j - 1) >= 0) {
					if (field[i - 1][j - 1] == '*')
						field[i][j]++;
				}
				if ((i - 1) >= 0) {
					if (field[i - 1][j] == '*')
						field[i][j]++;
				}
				if ((i - 1) >= 0 && (j + 1) < n) {
					if (field[i - 1][j + 1] == '*')
						field[i][j]++;
				}
				if ((j + 1) < n) {
					if (field[i][j + 1] == '*')
						field[i][j]++;
				}
				if ((i + 1) < m && (j + 1) < n) {
					if (field[i + 1][j + 1] == '*')
						field[i][j]++;
				}
				if ((i + 1) < m) {
					if (field[i + 1][j] == '*')
						field[i][j]++;
				}
				if ((i + 1) < m && (j - 1) >= 0) {
					if (field[i + 1][j - 1] == '*')
						field[i][j]++;
				}
				if ((j - 1) >= 0) {
					if (field[i][j - 1] == '*')
						field[i][j]++;
				}
			}
		}
	}
	





	for (int i = 0; i != m; i++) {
		for (int j = 0; j != n; j++) {
			std::cout << field[i][j] << ' ';
		}

		std::cout << '\n';
	}

	std::cin >> m;

}