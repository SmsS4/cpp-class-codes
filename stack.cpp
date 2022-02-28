#include<iostream>
using namespace std;


struct Stack {
	int size = 0;
	int maxsize = 1;
	int* a;
	Stack() {
		int* a = (int*) malloc(1 * sizeof(int)); 
	}
	void expand() {
		maxsize *= 2;
		int* b = (int*) malloc(maxsize * sizeof(int));
		for (int i = 0; i < size; i++)
			b[i] = a[i];
		free(a);
		a = b;
	}
	void deduct() {
		maxsize /= 2;
		int* b = (int*) malloc(maxsize * sizeof(int));
		for (int i = 0; i < size; i++)
			b[i] = a[i];
		free(a);
		a = b;
	}
	int push(int x) {
		if (size == maxsize - 1)
			expand();
		a[size] = x;
		size++;
	}

	void pop() {
		if (!this->empty()) {
			size--;
			if (size == (maxsize / 2) - 1)
				deduct();
		}
	}

	int top() {
		if (!this->empty())
			return a[size - 1];
	}

	int getsize() {
		return size;
	}

	void clear() {
		size = 0;
		free(a);
		maxsize = 1;
		a = (int*) malloc(1 * sizeof(int));
	}
	bool empty() {
		if (size == 0)
			return true;
		else
			return false;
	}


	int * end() {
		return a + size;
	}


	int * begin() {
		return a;
	}
};

int main() {
	Stack s;
	return 0;
}
