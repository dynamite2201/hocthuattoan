#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N,M;
    cin >> N >> M;
    int a[N*M+2];

    for (int i = 1; i<=N*M; i++) {
        cin>>a[i];
    }

    a[N*M+1] = 100000;

    int x,y;
    cin>>x>>y;

    int index = M*(x-1) + y;
    int value = a[index];
    // cout << value << "\n";

    int res = 0;
    sort(a + 1, a+N*M + 1); // sắp xếp từ a[1] cho đến a[N*M]

    // for (int i = 1; i<=N*M; i++) {
    //     cout<<a[i]<< " ";
    // }

    // cout << "\n";

    for (int i = N*M; i>=1; i--) {
        if (a[i] == a[i+1]) {
            continue;
        }
        if (a[i] > value) {
            res ++;
        } else {
            break;
        }
    }

    cout << res;

    return 0;
}