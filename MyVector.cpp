#include "MyVector.h"

MyVector::MyVector() : VectorData(nullptr), nelements{ 0 }{
	
}

MyVector::MyVector(int n) : nelements{ n } {
	VectorData = new int[nelements];
}

MyVector::~MyVector() {
	delete[]VectorData;
}

int MyVector::size() {
	return nelements;
}

void MyVector::push_back(int value) {
	VectorData[++nelements]= value;
}


void MyVector::pop_back() {
	if (nelements > 0)
		--nelements;
	else
		throw("empty");

}

void MyVector::insert(int pos, int value) {
	if (pos < 0 || pos >= nelements)
		throw ("Fuera de limite");
	VectorData[pos] = value;
}

int MyVector::operator[](int pos) {
	if (pos < 0 || pos >= nelements)
		throw ("Fuera de limite");

	return VectorData[pos];
}

int MyVector::operator+(const MyVector& other) {
	return 0;
}