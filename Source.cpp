#include <iostream>
#include <cassert>
#include "MyVector.cpp"

int main() {
	MyVector v1;

	assert(v1.size() == 0);

	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);

	assert(v1.size() == 3);

	MyVector v2;
	MyVector v3 = v1 + v2;

	assert(v3.size() == 3);

	int total = 0;
	for (int i = 0; i < v1.size(); ++i)
		total += v1[i];

	assert(total == 60);

	std::string resultado;
	try {
		v1.insert(10, 10);
	}
	catch (const std::exception& e) {
		resultado = e.what();
	}
	assert(resultado == "Fuera de limite");

	return 0;

}