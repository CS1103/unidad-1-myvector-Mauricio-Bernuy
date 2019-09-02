
class MyVector
{
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
};


class DinA
{
private:
	int cap;
	int nrOfEl;
	int* arr;

	void expand() {
		cap *= 2;

		int* tempArr = new int[cap];

		for (int i = 0; i < nrOfEl; i++)
		{
			tempArr[i] = arr[i];

		}

		delete[] arr;

		arr = tempArr;

	}
public:
	DinA() {
		cap = 10;
		nrOfEl = 0;
		arr = new int[cap];
	}

	~DinA()
	{
		delete[]arr;
	}

	void add(int el)
	{
		if (nrOfEl >= cap)
			expand();
		arr[nrOfEl++] = el;

	}

	int getAt(int index) const
	{
		if (index < 0 || index >= nrOfEl)
			throw ("out of bounds");
		return arr[index];
	}

	void popBack()
	{
		if (nrOfEl > 0)
			--nrOfEl;
		else
			throw("empty array");
	}
	int getnrOfEl()
	{
		return nrOfEl;
	}

};