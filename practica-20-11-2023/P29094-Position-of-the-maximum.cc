#include <iostream>
#include <vector>

int position_maximum(const std::vector<double>& v, int m) {
	int pos = 0;
	double max = v[0]; 
	for (int i = 1; i <= m; i++) {
		if (v[i] > max) {
			max = v[i];
			pos = i;
		}
	}
	return pos;
}

int main() {
	int m, n;
	while (std::cin >> m >> n) {
		std::vector<double> V(n);
		for (int i = 0; i < n; ++i) std::cin >> V[i];
		std::cout << position_maximum(V, m) << std::endl;
	}
}
