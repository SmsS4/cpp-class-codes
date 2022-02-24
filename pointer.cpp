#include<bits/stdc++.h>
using namespace std;


int main() {
    int x = 10;
    cout << "Value x: " <<  x << '\n';
    cout << "Address x: " << (&x) << '\n';
    int* p2x = &x;
    cout << "Address of pointed address: " << (p2x) << '\n';
    cout << "Address of p2x: " << (&p2x) << '\n';
    cout << "Value of p2x: " << (*p2x) << '\n';
}
