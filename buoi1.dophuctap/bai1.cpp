#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int A, B;
        int res = 0;
        cin >> A >> B;
        int temp = B; 
        int cnt = 0; 
        int power = 1;
        
        while (temp > 0) {
            cnt++;
            temp /= 10;
            power *= 10;
        }
        power /= 10;

        for (int i = A; i <= B; i++ ){
            int x = i;
            for (int j = 0; j < cnt; j++) {
                x = (x%10) * power + x/10;
                if ((x > i) and (x <= B))
                {
                    res++;
                }
                else if (x == i)
                {
                    break;
                }
            }
        }
        cout << "Case #" << i+1 << ": " << res << "\n";
    }
    return 0;
}