#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {
    int N;
    cin >> N;
    long int a[N];
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }

    sort(a, a+N);




    cout << max(a[N-1]*a[N-2]*a[N-3], a[N-1]*a[0]*a[1]) << "\n";

    return 0;
}