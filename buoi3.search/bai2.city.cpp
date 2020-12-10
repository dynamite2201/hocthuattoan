#include <iostream>
#include<algorithm>
#include <vector>
using namespace std;

int binarySearch(int a[], int left, int right, int x) {
    while (left <= right) {
        int mid = left + (right - left)/2;
        if (a[mid] == x)
            return mid;
        if (a[mid] > x)
            right = mid -1;
        else
            left = mid + 1;
    }
    return -1;
}

int main() {
    int m, n, k;
    cin >> m >> n >> k;
    int a[m+1][n+1];
    int c[k];
    int sum_1d[m*n];

    for (int i = 0; i <= m + 1; i++) {
        for (int j = 0; j <= n + 1; j++) {
            a[i][j] = 0;
        }
    }

    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < k; i++) {
        cin >> c[i];
    }


    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            sum_1d[(i-1)*n + j-1] = a[i-1][j-1] + a[i-1][j]+a[i-1][j+1]+a[i][j-1]+a[i][j+1]+a[i+1][j-1]+a[i+1][j]+a[i+1][j+1];
        }
    }

    sort(sum_1d, sum_1d + m*n);

    for (int i = 0; i<k; i++) {
        if (binarySearch(sum_1d, 0, m*n, c[i]) == -1)
            cout << 0 << " ";
        else
            cout << 1 <<" ";
    }

    return 0;
}