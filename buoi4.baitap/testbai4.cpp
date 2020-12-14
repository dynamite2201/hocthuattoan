#include <iostream>
using namespace std;

int main() {
    freopen("inputtestbai4.txt", "r", stdin);
    freopen("outputtestbai4.txt", "w", stdout);
    long long count = 0;
    bool flag = false;
    for (int i =0 ; i<5;i++) {
        long long int a,b,c;
        cin >> a >> b >> c;
        cout <<i << ": "<<(long long int)min(a, (55955-c)/b) << "\n";
        count += (long long int)min(a, (55955-c)/b);
        if(count >= 20) {
            flag = true;
        }
    }
    cout <<"flag: "<<flag << "\n";
}

