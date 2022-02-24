#include<bits/stdc++.h>
using namespace std;

void f(int *x) {
   *x = 25; 
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
    cout << a[3] << '\n' /// 10
    cout << (*(a+3)) << '\n'; /// 10
}
