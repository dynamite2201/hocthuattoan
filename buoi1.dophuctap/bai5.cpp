#include <iostream>
using namespace std;
// 24453 dap an
//R k N
// 624 47 5
// 30 10 11 36 11
int main() {
    int T;
    cin >> T;
    // T = 1;
    for (int t=0; t < T; t++) {
        long int R, k, N;
        cin >> R >> k >> N;
        // R = 624;
        // k = 47;
        // N = 5;
        int g[N-1];
        // int g[N-1] = {30, 10, 11, 36, 11};
        // R la so luot di cua tau
        // k: tau chi chua dc k nguoi
        // N: co N group
        // g[N]: so luong nguoi moi group

        for (int i=0; i<N;i++) {
            cin>> g[i];
        }

        // cout << R << " " << k << " " << N << "\n";


        long int cost = 0;
        long int total = 0;

        for (int i=0; i<N;i++) {
            total = total +g[i];
        }

        if (k >= total) {
            cost = R*total;
        } else {
            
            int bag = 0;
            int times = 0;

            int u[N*N];
            int h[N*N];
            int index_u = 0;
            int index_h = 0;
            int index_start_loop = -1;
            int index_end_loop = -1;

            for (int z = 0; z< N*N; z++) {

                if (times == R) {
                    break;
                }

                bag = bag + g[z%N];
                if (bag > k) {
                    
                    bag = bag - g[z%N];
                    u[index_u] = bag;
                    index_u ++;
                    cost = cost + bag;
                    bag = 0;
                    times = times + 1;

                    z = z -1;
                    h[index_h] = z;
                    
                    index_h++;
                }
            }
            // cout << times << "\n";
            
            // cout <<index_h<< " " << index_u << "\n";

            // for (int i= 0; i<times;i++) {
            //     cout << u[i] << " " << h[i] << "\n";
            // }

            int h_index_start = 0;
            int h_index_end = 0;
            if (times < R) {
                cost = 0;
                for (int m = 0; m < times; m++) {
                    for (int l = m+1; l < times; l++) {
                        if ((h[l]%N) == (h[m]%N)) {
                            index_start_loop = h[m];
                            index_end_loop = h[l];
                            h_index_start = m;
                            h_index_end = l;
                            // cout <<"START AND END \n";
                            // cout << index_start_loop << " " << index_end_loop << " \n";
                            break;
                        }
                        if (index_start_loop != -1) {
                            break;
                        }
                    }
                }

                // cout <<index_start_loop << " " << index_end_loop << "\n";

                for (int j = 0; j <=h_index_start ; j++) {
                    cost = cost + u[j];
                }

                long int sumofloop=0;
                // cout << "Element of SUM \n:";
                for (int j=h_index_start+1; j<=h_index_end; j++) {
                    
                    // cout << u[j] << "\n";
                    sumofloop = sumofloop + u[j];

                }

                // cout << "SUM" << sumofloop << " \n";

                int rangeofloop = h_index_end - h_index_start;

                // cout <<index_end_loop << " " << index_start_loop;

                int rangeofbegin = h_index_start + 1;
                // cout << "rangeofbegin:" <<rangeofbegin << "\n";
//  cout << "zero cost:" << cost << "\n";               
                cost = cost + ((R-rangeofbegin)/rangeofloop) * sumofloop;
// cout << "first cost:" << cost << "\n";
                if ((R-rangeofbegin)%rangeofloop !=0) {
                    int temp = (R-rangeofbegin)%rangeofloop;
                    for (int j=h_index_start+1; j<=h_index_start+temp;j++) {
                        cost = cost + u[j];
                    }
                }
            }
        }

        cout <<"Case #" <<t+1<<": "<<cost<<"\n";
    }
    return 0;
}

// 1 4, 2 1 | 1, 4 2, 1| 1 4, 2 1 | 1, 4 2 ,1| 1 4, 2 1| 1 ,4 2, 1| 1 4, 2 1| 1 4 2 1| 

// 1 day luu so luong nguoi trong 1 chuyen tau []

// R k N  
// 100 10 1

// 1
// k = 5
// N=3
// 1 4, 2 | 1, 4, 2 | 1 ,4, 2 | 1 ,4 ,2 | 1, 4, 2 | 1, 4 2 | 1 4 2 | 1 4 2 | 1 4 2

// 1 day luu so luong nguoi trong 1 chuyen tau [5,3,4,3,4,3,4,3,4,3,4,3,4.......] day u
// 1 day luu cac index cua day tren [1,3,4,6,7,9,10,12,13,15,16,18,19,21........] day h
// ==> vi tri bat dau h[0]. vi tri ket thuc h[2] vi h[2] mod 3 = h[0] mod 3.

// ==> tinh u [0] --> u[0] + (u[1] --> u[2]) * times
//              5             +  (3+ 4)
// day lap: u 3,4