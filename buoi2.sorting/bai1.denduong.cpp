#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cin >> n;
    long int L;
    cin >> L;
    long int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a, a+n);
    double res = max(a[0]-0, L-a[n-1]);

    for (int i = 1; i <n; i++) {
        res = max(res, (double(a[i]-a[i-1]))/2);
    }

    cout << fixed <<setprecision (2) << res << "\n";

    return 0;
}