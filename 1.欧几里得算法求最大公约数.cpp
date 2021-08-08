#include <bits/stdc++.h>

using namespace std;

int main() {
    long long a, b;
    cin >> a >> b;
    long long mx = a >= b ? a : b;
    long long mn = a + b - mx;
    while (mn) {
        long long temp = mn;
        mn = mx % mn;
        mx = temp;
    }
    cout << mx;
    return 0;
}
