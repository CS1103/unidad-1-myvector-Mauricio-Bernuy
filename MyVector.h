
#ifndef MyVector_HEADER
#define MyVector_HEADER
#include <iostream>

class MyVector {
private:
	int nelements;
	int* VectorData;
public:
	MyVector();
	MyVector(int);
	virtual ~MyVector();
	int size();
	void push_back(int);
	void insert(int, int);
	void pop_back();
	int operator[](int);
	int operator+(const MyVector& other);
};

#endif