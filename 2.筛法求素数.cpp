#include <bits/stdc++.h>

using namespace std;
//埃氏筛
// const int MAXN = 1e6 + 10;
// int prime[MAXN];
// void isPrime() {
//     memset(prime, 1, sizeof(prime));
//     prime[0] = prime[1] = 0;
//     for (long long i = 2; i * i <= MAXN; i++)
//         if (prime[i])
//             for (long long j = i * i; j <= MAXN; j += i) prime[j] = 0;
// }
// 6倍数判别法
// bool isPrime(long long n) {
//     if (n <= 1) return false;
//     if (n == 2 || n == 3) return true;
//     if (n % 6 != 1 && n % 6 != 5) return false;
//     for (long long i = 5; i * i <= n; i += 6) {
//         if (n % i == 0 || n % (i + 2) == 0) return false;
//     }
//     return true;
// }
//线性筛
const int MAXN = 1e6 + 10;
bool prime[MAXN];
long long su[MAXN], cnt;

void isPrime() {
    memset(prime, 1, sizeof(prime));
    prime[0] = prime[1] = 0;
    for (long long i = 2; i <= MAXN; i++) {
        if (prime[i]) su[++cnt] = i;
        for (long long j = 1; j <= cnt && su[j] * i <= MAXN; j++)
            prime[su[j] * i] = 0;
    }
}

int main() {
    std::ios::sync_with_stdio(0);
    isPrime();
    int N;
    cin >> N;
    while (N--) {
        long long n;
        cin >> n;
        if (prime[n])
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}
