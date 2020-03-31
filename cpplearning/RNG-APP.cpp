#include <iostream>
#include <cstdlib>
#include <time.h>

unsigned int PRNG() {
	static unsigned int seed{ 7352 };

	seed = 1234567890 * seed + 1234567890;

	return seed % 10;
}


int main() {

	for (int count{ 1 }; count <= 20; ++count) {
		std::cout << PRNG() << std::endl;
	}

	return 0;
}