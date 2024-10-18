#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <map>
#include <vector>

using namespace std;

int nextInt() {
    int x = 0, p = 1;
    char c;
    do {
        c = getchar();
    } while (c <= 32);
    if (c == '-') {
        p = -1;
        c = getchar();
    }
    while (c >= '0' && c <= '9') {
        x = x * 10 + c - '0';
        c = getchar();
    }
    return x * p;
}

const int maxn = 100000;
long long cnt[maxn+1] = {0};

int main(){
    int n = 0;
    // cin >> n;
    n = nextInt();

    long long dp[maxn+1] = {0};
    long long a[maxn+1];

    for (int i = 1; i<=n; i++){
        a[i] = nextInt();
        cnt[a[i]]++;
    }

    dp[0] = 0;
    dp[1] = cnt[1];

    for (long long i=2; i<=maxn; i++){
        dp[i] = max<long long>(dp[i-1], dp[i-2] + cnt[i] * i);
    }
    cout << dp[maxn] << endl;
}