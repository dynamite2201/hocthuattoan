#include <iostream>
#include<math.h>
#include <algorithm>
using namespace std;

int main() {

    int N;
    cin>>N;
    int a[N][N];
    int b[N];
    for (int i=0; i<N;i++) {
        for (int j=0;j<N;j++) {
            cin >> a[i][j];
        }
    }

    for (int i=0; i<N;i++) {
        for (int j=0;j<N;j++) {
            sort(a[i], a[i]+N);
            b[i] = a[i][N/2];
        }
    }

    sort(b,b+N);
    cout << b[N/2];





    return 0;
}