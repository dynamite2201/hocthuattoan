#include <iostream>
#include <cmath>
using namespace std;


long long int FindIndexOf (long long int N) {
    long long int res = N/3 + N/5 + N/7;
    res = res - (N/15 + N/35 + N/21);
    res = res + N/(3*5*7);
    return res;
}

long long int calc (long long int K) {
    long long int left = 3;
    long long int right = 3*K;

    while (left <= right) {
        long long int X = left + (right - left)/2;
        long long int  index = FindIndexOf(X);

        if (index==K and (X%3==0 or X%5==0 or X%7==0))
            return X;
        
        if (index < K)
            left = X + 1;
        else
            right = X - 1;
    }
    return 0;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    long long int ID, K;
    cin >> ID >> K;
    cout << calc(K);

    return 0;
}