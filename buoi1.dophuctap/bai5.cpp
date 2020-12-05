#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    for (int t=0; t < T; t++) {

        int R, k, N;
        cin >> R >> k >> N;
        int g[N];

        // R la so luot di cua tau
        // k: tau chi chua dc k nguoi
        // N: co N group
        // g[N]: so luong nguoi moi group

        for (int i=0; i<N;i++) {
            cin>> g[i];
        }

        int total = 0;

        for (int i=0; i<N;i++) {
            total = total +g[i];
        }
        
        int cost = 0;
        int bag = 0;
        int times = 0;
        
        for (int z = 0; z< R*N; z++) {

            if (times == R) {
                break;
            }

            bag = bag + g[z%N];
            if (bag > k) {
                cost = cost + bag - g[z%N];
                bag = 0;
                times = times + 1;
                z = z -1;
            }
        }

        if (k >= total) {
            cost = R*total;
        }

        cout <<"Case #" <<t+1<<": "<<cost<<"\n";

    }
    return 0;
}
