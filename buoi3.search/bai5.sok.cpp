#include <iostream>
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

    while (left < right) {
        long long int mid = left + (right - left)/2;
        long long int  index = FindIndexOf(mid);

        if (FindIndexOf(mid)>=K)
            right = mid;
        else
            left = mid + 1;
    }
    return right;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    
    //  freopen("input.txt", "r", stdin);
    //  freopen("output.txt", "w", stdout);

    long long int ID, K;
    cin >> ID >> K;
    cout << calc(K);

    return 0;
}