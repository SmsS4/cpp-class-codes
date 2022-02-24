#include<bits/stdc++.h>
using namespace std;

void f(int* z) {
   *z = 25; 
}

void sort(int *l, int *r) {
}

int z[10];

int* g() {
    int* t = (int*)malloc(10*sizeof(int));
    char* ch = malloc(30);
    for (int i = 0; i < 10; i++) t[i] = i*i;
    return t;
}

int main() {
    int x = 10;
    cout << "Value x: " <<  x << '\n';
    cout << "Address x: " << (&x) << '\n';
    int* p2x = &x;
    cout << "Address of pointed address: " << (p2x) << '\n';
    cout << "Address of p2x: " << (&p2x) << '\n';
    cout << "Value of p2x in ram: " << (*p2x) << '\n';
    x = 15;
    cout << "New value of x:" << (*p2x) << '\n'; // 15
    int** p2p2x = &p2x;
    cout << "Address of p2p2px in ram: " << (&p2p2x) << '\n';
    cout << "p2x: " << (*p2p2x) << '\n';
    cout << "*p2x == x: " << (**p2p2x) << '\n';
    *p2x = 20;
    cout << x << '\n';
    f(p2x);
    cout << x << '\n';

    int a[10];
    a[3] = 10;
    cout << (a) << '\n';
    /// a is pointer to first element of array
    cout << a[3] << '\n'; /// 10
    cout << (*(a+3)) << '\n'; /// 10
    sort(a, a+10);
    
    int* int_p = &x;
    cout << int_p << '\n';
    cout << (int_p+1) << '\n';

    bool b = false;
    bool* bool_p = &b;
    cout << bool_p << '\n';
    cout << (bool_p + 1) << '\n';


    char ch[5];
    ch[0] = '1';
    ch[1] = 'x';
    ch[2] = '-';
    cout << (ch) << '\n'; /// 1x-

    int* c = g();
    cout << (*c) << ' ' << (*(c+1)) << '\n';
}
