#include<bits/stdc++.h>
using namespace std;

struct Vector {
    int size = 0;
    int maxSize = 1;
    int* a;
    Vector() {
        a = (int*) malloc(1*sizeof(int));
    }

    void expand() {
        int* b = (int*)malloc(maxSize*2*sizeof(int));
        for (int i = 0; i < size; i++)
            b[i] = a[i];
        free(a);
        a = b;
        maxSize *= 2;
    }

    int get(int index) {
        return a[index];
    }

    void push_back(int x) {
        a[size] = x;
        size ++;
        if (size == maxSize) {
            expand();
        }
    }

    void pop_back() {
        size --;
    }

    int back() {
        return a[size-1];
    }


};

int main() {
    Vector v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    cout << v.size << '\n';
    for (int i = 0; i < v.size; i++) {
        cout << v.get(i) << ' ';
    }
    cout << '\n';
    v.pop_back();
    cout << v.size << '\n';
    for (int i = 0; i < v.size; i++) {
        cout << v.get(i) << ' ';
    }

}

