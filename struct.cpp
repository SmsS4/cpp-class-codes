#include<bits/stdc++.h>
using namespace std;

struct MyPair { /// Pair<int, int>
    int second;
    int first = 10;

    /// constructor
    MyPair() {
        second = 20;
    }

    int mul() {
        return first * second;
    }

    int cm(int z) {
        return z * second;
    }
};



int main() {
    MyPair mp;
    cout << mp.first << ' ' << mp.second << '\n';
    mp.first = 1;
    mp.second = 5;
    cout << mp.first << ' ' << mp.second << '\n';
    MyPair pairs[10];
    pairs[3].first = 15;
    cout << pairs[3].first << '\n';

    cout << mp.mul() << '\n';
    cout << mp.cm(10) << '\n';

    MyPair* p = &mp;
    cout << (*p).first << '\n';
    cout << (p->first) << '\n';
}
