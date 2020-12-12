#include <cmath> 
#include <iomanip> 
#include <iostream> 
using namespace std;

int main() {
    int T;
    cin >> T;
    for (int w = 0; w < T; w++) {
        long long r,t;
        cin >> r >> t;

        long long left = 0;
        long long right = min ((long long) sqrt(t) + 1, t/(r));

        // find upper bound (vị trí đầu tiên có giá trị lớn hơn giá trị tìm)
        while (left < right) {
            long long mid =left + (right - left)/2;
            if (t >= 2*mid*mid + mid*(2*r-1)) {
                left = mid + 1;
            } else {
                right = mid;
            }
        }

        if (2*left*left + left*(2*r-1) == t or left == 0)
        // nếu giá trị tìm được nằm trong mảng thì không cần trừ -1
        // left = 0 khi không có vòng lặp nào xảy ra thì tức là không tô 
        // được vòng tròn nào cả (ví dụ r>t)
            cout <<"Case #"<< w+1 <<": "<< left <<"\n";
        else
            cout <<"Case #"<< w+1 <<": "<< left-1 <<"\n";
    }
    return 0;
}