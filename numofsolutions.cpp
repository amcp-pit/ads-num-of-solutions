#include <iostream>

unsigned long long num_of_solutions(int n, unsigned long long mod);

int main () {
	int n = 0;
	unsigned long long mod = 1ULL << 63;
	std::cin >> n >> mod;
	std::cout << num_of_solutions(n, mod) << std::endl;
	return 0;
}

unsigned long long num_of_solutions(int n, unsigned long long mod){
  /* Здесь ваш код */
}
